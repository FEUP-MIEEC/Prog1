#include "shopcommunication.h"

uint8_t MAQ2FLAG = 0;

int moveTapete(uint8_t tapete, uint8_t direcao) {
    switch (tapete) {
        case AT1:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 1, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 0, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 1, 0);
                modbus_write_bit(mb, 0, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT1:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 3, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 2, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 3, 0);
                modbus_write_bit(mb, 2, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT2:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 5, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 4, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 5, 0);
                modbus_write_bit(mb, 4, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT3:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 9, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 8, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 9, 0);
                modbus_write_bit(mb, 8, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT4:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 18, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 17, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 18, 0);
                modbus_write_bit(mb, 17, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT5:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 20, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 19, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 20, 0);
                modbus_write_bit(mb, 19, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case SAT6:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 29, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 28, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 29, 0);
                modbus_write_bit(mb, 28, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        case CT1:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 33, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 32, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 33, 0);
                modbus_write_bit(mb, 32, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função moveTapete()\n");
            break;
        default:
            printf("Tapete passado como parametro não existe na função moveTapete().\n");
            break;
    }
    return 1;
}

int rodaTapete(uint8_t tapete, uint8_t direcao) {

    switch (tapete) {
        case SAT2:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 6, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 7, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 6, 0);
                modbus_write_bit(mb, 7, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função rodaTapete()\n");
            break;
        case SAT6:
            if (direcao == NEG) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 30, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == POS) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 31, 1);
                pthread_mutex_unlock(&mutex);
            }
            else if (direcao == STOP) {
                pthread_mutex_lock(&mutex);
                modbus_write_bit(mb, 30, 0);
                modbus_write_bit(mb, 31, 0);
                pthread_mutex_unlock(&mutex);
            }
            else printf("Direcao passada como argumento errada na função rodaTapete()\n");
            break;
        default:
            printf("Tapete passado como argumento não existe na função rodaTapete().\n");
            break;
    }
    return 1;
}

int lerSensorTapete(uint8_t tapete, uint8_t parameter) {
    uint8_t s = 0;
    if (parameter == PSENSOR) {
        switch (tapete) {
            case AT1:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 0, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT1:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 1, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT2:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 2, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT3:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 5, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT4:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 11, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT5:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 12, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            case SAT6:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 18, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;

            case CT1:
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 21, 1, &s);
                pthread_mutex_unlock(&mutex);
                break;
            default:
                printf("Tapete passado como argumento não existe na função lerSensorTapete().\n");
                break;
        }
    }
    else if (parameter == NEG || parameter == POS) {
        switch (tapete) {
            case SAT2:
                if (parameter == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 3, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (parameter == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 4, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else printf("Parametro errado na função lerSensorTapete().\n");
                break;
            case SAT6:
                if (parameter == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 19, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (parameter == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 20, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else printf("Parametro errado na função lerSensorTapete().\n");
                break;
        }
    }
    else printf("Parametro errado na função lerSensorTapete().\n");
    return s;
}

int moveMaquina(uint8_t maquina, char eixo, uint8_t direcao) {
    switch (maquina) {
        case MAQ1:
            if (eixo == 'x' || eixo == 'X') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 13, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 14, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == STOP) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 13, 0);
                    modbus_write_bit(mb, 14, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            else if (eixo == 'z' || eixo == 'Z') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 16, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 15, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == 0) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 16, 0);
                    modbus_write_bit(mb, 15, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            else if (eixo == 'r' || eixo == 'R') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 10, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == STOP) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 10, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            break;
        case MAQ2:
            if (eixo == 'x' || eixo == 'X') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 24, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 25, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == STOP) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 24, 0);
                    modbus_write_bit(mb, 25, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            else if (eixo == 'z' || eixo == 'Z') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 27, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 26, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == STOP) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 27, 0);
                    modbus_write_bit(mb, 26, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            else if (eixo == 'r' || eixo == 'R') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 21, 1);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == 0) {
                    pthread_mutex_lock(&mutex);
                    modbus_write_bit(mb, 21, 0);
                    pthread_mutex_unlock(&mutex);
                }
            }
            break;
        default:
            printf("Máquina passada como parametro não existe na função moveMaquina().\n");
            break;
    }
    return 1;
}

int lerSensorMaquina(uint8_t maquina, char sensor, uint8_t direcao) {
    uint8_t s = 0;

    switch (maquina) {
        case MAQ1:
            if (sensor == 'x' || sensor == 'X') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 8, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 7, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }

            }
            else if (sensor == 'z' || sensor == 'Z') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 10, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 9, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }

            }
            else if (sensor == 't' || sensor == 'T') {
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 6, 1, &s);
                pthread_mutex_unlock(&mutex);
            }
            else s = -1;
            break;
        case MAQ2:
            if (sensor == 'x' || sensor == 'X') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 15, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 14, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }

            }
            else if (sensor == 'z' || sensor == 'Z') {
                if (direcao == NEG) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 17, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }
                else if (direcao == POS) {
                    pthread_mutex_lock(&mutex);
                    modbus_read_input_bits(mb, 16, 1, &s);
                    pthread_mutex_unlock(&mutex);
                }

            }
            else if (sensor == 't' || sensor == 'T') {
                pthread_mutex_lock(&mutex);
                modbus_read_input_bits(mb, 13, 1, &s);
                pthread_mutex_unlock(&mutex);
            }
            else s = -1;
            break;
        default:
            printf("Máquina passada como parametro não existe na função lerSensorMaquina().\n");
            break;
    }

    return s;
}

int tapeteLivre(uint8_t tapete) {
    uint8_t move[5] = {0}, n = 1;

    switch (tapete) {
        case AT1:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 0, 2, move);
            if (move[0] || move[1])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT1:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 2, 2, move);
            if (move[0] || move[1])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT2:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 4, 4, move);
            if (move[0] || move[1] || move[2] || move[3])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT3:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 8, 2, move);
            if (move[0] || move[1])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT4:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 17, 2, move);
            if (move[0] || move[1])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT5:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 19, 2, move);
            if (move[0] || move[1])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case SAT6:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 28, 4, move);
            if (move[0] || move[1] || move[2] || move[3])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        case CT1:
            pthread_mutex_lock(&mutex);
            modbus_read_bits(mb, 32, 4, move);
            if (move[0] || move[1] || move[2] || move[3])
                n = 0;
            pthread_mutex_unlock(&mutex);
            break;
        default:
            printf("Tapete passado como argumento não existe na função tapeteLivre().\n");
            break;
    }
    return n;
}


void ligaMaquina(uint8_t maquina) {
    pthread_mutex_lock(&mutex);
    if (maquina == MAQ1)
        modbus_write_bit(mb, 12, 1);
    else if (maquina == MAQ2)
        modbus_write_bit(mb, 23, 1);
    else printf("Máquina passada como parametro não existe na função ligaMaquina().\n");
    pthread_mutex_unlock(&mutex);
}

void desligaMaquina(uint8_t maquina) {
    pthread_mutex_lock(&mutex);
    if (maquina == MAQ1)
        modbus_write_bit(mb, 12, 0);
    else if (maquina == MAQ2)
        modbus_write_bit(mb, 23, 0);
    else printf("Máquina passada como parametro não existe na função desligaMaquina().\n");
    pthread_mutex_unlock(&mutex);
}

void empurraPeca(uint8_t pusher, uint8_t direcao) {
    if (pusher == PUSHER1) {
        if (direcao == POS) {
            pthread_mutex_lock(&mutex);
            modbus_write_bit(mb, 34, 1);
            pthread_mutex_unlock(&mutex);
        }
        else if (direcao == NEG) {
            pthread_mutex_lock(&mutex);
            modbus_write_bit(mb, 35, 1);
            pthread_mutex_unlock(&mutex);
        }
        else if (direcao == STOP) {
            pthread_mutex_lock(&mutex);
            modbus_write_bit(mb, 34, 0);
            modbus_write_bit(mb, 35, 0);
            pthread_mutex_unlock(&mutex);
        }
        else printf("Direcao passada como argumento errada na função empurraPeca()\n");
    }
    else printf("Pusher passado como argumento não existe na função empurraPeca().\n");

}

int lerSensorPusher(uint8_t pusher, uint8_t direcao) {
    uint8_t s = -1;
    if (pusher == PUSHER1) {
        if (direcao == POS) {
            pthread_mutex_lock(&mutex);
            modbus_read_input_bits(mb, 22, 1, &s);
            pthread_mutex_unlock(&mutex);
        }
        else if (direcao == NEG) {
            pthread_mutex_lock(&mutex);
            modbus_read_input_bits(mb, 23, 1, &s);
            pthread_mutex_unlock(&mutex);
        }
        else if (direcao == PSENSOR) {
            pthread_mutex_lock(&mutex);
            modbus_read_input_bits(mb, 24, 1, &s);
            pthread_mutex_unlock(&mutex);
        }
        else printf("Direcao passada como argumento errada na função lerSensorPusher()\n");
    }
    else printf("Pusher passado como argumento não existe na função lerSensorPusher().\n");
    return s;
}

void inicializaMaquina(uint8_t maquina) {
    uint8_t state = 1;
    if (maquina == MAQ1) {
        while (1) {
            switch (state) {
                case 1:
                    moveMaquina(maquina, 'r', NEG);
                    state = 2;
                    break;
                case 2:
                    if (lerSensorMaquina(maquina, 't', 0)) {
                        moveMaquina(maquina, 'r', 0);
                        state = 3;
                    }
                    break;

            }
            if (state == 3)
                break;
        }
    }
    else if (maquina == MAQ2) {
        while (1) {
            if (MAQ2FLAG)
                break;
            switch (state) {
                case 1:
                    moveMaquina(maquina, 'r', NEG);
                    state = 2;
                    break;
                case 2:
                    if (!lerSensorMaquina(maquina, 't', 0))
                        state = 3;

                    break;
                case 3:
                    if (lerSensorMaquina(maquina, 't', 0)) {
                        moveMaquina(maquina, 'r', 0);
                        state = 4;
                        MAQ2FLAG = 1;
                    }
                    break;

            }
            if (state == 4)
                break;
        }
    }
    else printf("Maquina passada como parametro não existe na função inicializaMaquina().\n");
}

void temporizador(int tempo) {
    usleep(tempo * 1000000);
}
