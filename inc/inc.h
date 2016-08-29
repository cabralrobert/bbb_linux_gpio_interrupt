/*******************************************************
*                                                      *
*   Criado em: Seg 29/Ago/2016,  14:33 hs              *
*   Instituicao: Universidade Federal do Ceará         *
*   Autor: Robert Cabral                               *
*   email: robertcabral@alu.ufc.br                     *
*                                                      *
********************************************************/
#ifndef _GPIOINC_H
#define _GPIOINC_H

//INCLUDES GERAIS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <poll.h>
#include "gpioInit.h"
#include "gpioInterrupt.h"
#include "gpioValue.h"
#include "gpioDirection.h"

//CONSTANTES

#define SYSFS_GPIO_DIR "/sys/class/gpio"
#define POLL_TIMEOUT (1 * 1000) /* 3 seconds */
#define MAX_BUF 64

#endif
