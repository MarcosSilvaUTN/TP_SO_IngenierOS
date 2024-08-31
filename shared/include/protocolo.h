#ifndef PROTOCOLO_H_
#define PROTOCOLO_H_

#include <inttypes.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

// Creamos la estructura del mensaje a pasar
typedef enum {
    MENSAJE_1,
    MENSAJE_2,
    VALOR = 10
} codigo_operacion;



#endif