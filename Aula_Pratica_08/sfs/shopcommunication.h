#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <modbus.h>
#include <pthread.h>
#include <unistd.h>

#define POS 1
#define NEG 2
#define STOP 0
#define PSENSOR 0

#define MAQ1 1
#define MAQ2 2
#define PUSHER1 1

#define AT1 1
#define AT2 2
#define SAT1 3
#define SAT7 4
#define SAT2 5
#define SAT3 6 
#define SAT4 7
#define SAT5 8
#define SAT6 9
#define CT1 10


extern modbus_t *mb;
extern pthread_mutex_t mutex;

int moveTapete(uint8_t tapete, uint8_t direcao);
int rodaTapete(uint8_t tapete, uint8_t direcao);
int lerSensorTapete(uint8_t tapete, uint8_t parameter);
int moveMaquina(uint8_t maquina, char eixo, uint8_t direcao);
int lerSensorMaquina(uint8_t maquina, char sensor, uint8_t direcao);
void inicializaMaquina(uint8_t maquina);
int tapeteLivre(uint8_t tapete);
void ligaMaquina(uint8_t maquina);
void desligaMaquina(uint8_t maquina);
void empurraPeca(uint8_t pusher,uint8_t direcao);
int lerSensorPusher(uint8_t pusher,uint8_t direcao);
void temporizador(int tempo);

