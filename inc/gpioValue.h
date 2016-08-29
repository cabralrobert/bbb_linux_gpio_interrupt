/*******************************************************
*                                                      *
*   Criado em: Seg 29/Ago/2016,  14:27 hs              *
*   Instituicao: Universidade Federal do Ceará         *
*   Autor: Robert Cabral                               *
*   email: robertcabral@alu.ufc.br                     *
*                                                      *
********************************************************/
#ifndef _GPIOVALUE_H
#define _GPIOVALUE_H

int gpio_set_value(unsigned int gpio, unsigned int value);
int gpio_get_value(unsigned int gpio, unsigned int *value);

#endif
