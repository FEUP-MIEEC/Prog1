#include <stdio.h>
#include <modbus.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>
#include <unistd.h>
#include "shopcommunication.h"

modbus_t *mb = NULL;
pthread_mutex_t mutex;

int n_threads = 0;


void *maquinaEstado(void *args) {
    int state = 1;

    while (1) {
        /*---------------------Coloque aqui o seu código-----------------------*/
        switch (state) {
            case 1:
                if (tapeteLivre(SAT1) && !lerSensorTapete(SAT1, PSENSOR)) {
                    moveTapete(AT1, NEG);
                    moveTapete(SAT1, NEG);
                    state = 2;
                }
                break;
            case 2:
                if (lerSensorTapete(SAT1, PSENSOR)) {
                    moveTapete(AT1, STOP);
                    moveTapete(SAT1, STOP);
                    state = 3;
                }
                break;
            case 3:
                if (lerSensorTapete(SAT2, POS)) {
                    rodaTapete(SAT2, NEG);
                }
                if (lerSensorTapete(SAT2, NEG)) {
                    rodaTapete(SAT2, STOP);
                    moveTapete(SAT1, NEG);
                    moveTapete(SAT2, NEG);
                    state = 4;
                }
                break;
            case 4:
                if (lerSensorTapete(SAT2, PSENSOR)) {
                    moveTapete(SAT2, STOP);
                    if (lerSensorTapete(SAT2, NEG)) {
                        rodaTapete(SAT2, POS);
                        state = 5;
                    }
                }
                break;
            case 5:
                if (lerSensorTapete(SAT2, POS)) {
                    rodaTapete(SAT2, STOP);
                    moveTapete(SAT2, POS);
                    state = 6;
                }
                break;
            case 6:
                moveTapete(SAT3, POS);
                if (lerSensorTapete(SAT3, PSENSOR)) {
                    moveTapete(SAT3, STOP);
                    state = 7;
                }
                break;
            case 7:
                inicializaMaquina(MAQ1);
                ligaMaquina(MAQ1);
                temporizador(15);
                desligaMaquina(MAQ1);
                state = 8;
                break;
            case 8:
                moveTapete(SAT3, POS);
                moveTapete(SAT4, POS);
                if (lerSensorTapete(SAT5, PSENSOR)) {

                }
                moveTapete(SAT5, POS);
                state = 9;
                break;
            case 9:
                if (lerSensorTapete(SAT5, PSENSOR)) {
                    moveTapete(SAT5, STOP);
                    state = 10;
                }
                break;
            case 10:
                inicializaMaquina(MAQ2);
                ligaMaquina(MAQ2);
                temporizador(10);
                desligaMaquina(MAQ2);
                state = 11;
                break;
            case 11:
                if (lerSensorTapete(SAT6, NEG)) {
                    rodaTapete(SAT6, POS);
                }
                if (lerSensorTapete(SAT6, POS)) {
                    rodaTapete(SAT6, STOP);
                    moveTapete(SAT5, POS);
                    state = 12;
                }
                break;
            case 12:
                moveTapete(SAT6, POS);
                if (lerSensorTapete(SAT6, PSENSOR)) {
                    moveTapete(SAT6, STOP);
                    state = 13;
                }
                break;
            case 13:
                rodaTapete(SAT6, NEG);
                if (lerSensorTapete(SAT6, NEG)) {
                    rodaTapete(SAT6, STOP);
                    state = 14;
                }
                break;
            case 14:
                moveTapete(SAT6, POS);
                moveTapete(CT1, POS);
                state = 15;
                break;
            case 15:
                if (lerSensorTapete(CT1, PSENSOR)) {
                    moveTapete(CT1, STOP);
                    state = 16;
                }
                break;
            case 16:
                if (!lerSensorPusher(PUSHER1, PSENSOR)) {
                    empurraPeca(PUSHER1, NEG);
                } else {
                    state = 17;
                }
                break;
            case 17:
                if (lerSensorPusher(PUSHER1, PSENSOR)) {
                    empurraPeca(PUSHER1, STOP);
                    empurraPeca(PUSHER1, POS);
                }
                if (lerSensorPusher(PUSHER1, POS)) {
                    empurraPeca(PUSHER1, STOP);
                }
                break;
        }


        /*---------------Não acrescente código para além deste ponto-----------*/
        usleep(3);
    }
}

int main(int argc, char **argv) {
    char ip[] = "127.0.0.1";
    char port[] = "5502";
    int state = 1;
    pthread_t SM;

    /* create connection with shop floor simulator */
    mb = modbus_new_tcp_pi(ip, port);

    /* test the connection */
    if (mb == NULL) {
        printf("Erro na conexão ip %s porta %s.\n", ip, port);
        return -1;
    }
    if (modbus_connect(mb) == -1) {
        fprintf(stderr, "Conexão falhada no ip %s porta %s.\n", ip, port);
        modbus_free(mb);
        return -1;
    }
    else
        printf("Conexão estabelecida com sucesso no ip %s porta %s.\n", ip, port);

    while (1) {
        switch (state) {
            case 1:
                if (lerSensorTapete(AT1, PSENSOR)) {
                    pthread_create(&SM, NULL, maquinaEstado, (void *) NULL);
                    state = 2;
                }
                break;
            case 2:
                if (!lerSensorTapete(AT1, PSENSOR)) {
                    state = 1;
                }
                break;
        }
    }

    return -1;
}
