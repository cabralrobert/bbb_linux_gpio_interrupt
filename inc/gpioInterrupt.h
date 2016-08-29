/*******************************************************
*                                                      *
*   Criado em: Seg 29/Ago/2016,  14:31 hs              *
*   Instituicao: Universidade Federal do Ceará         *
*   Autor: Robert Cabral                               *
*   email: robertcabral@alu.ufc.br                     *
*                                                      *
********************************************************/
#ifndef _GPIOINTERRUPT_H
#define _GPIOINTERRUPT_H

int gpio_set_edge(unsigned int gpio, char *edge);
int gpio_fd_open(unsigned int gpio);
int gpio_fd_close(int fd);

#endif
