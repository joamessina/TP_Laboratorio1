/*
 ============================================================================
 Name        : TrabajoPractico2_2022.c
 Author      : Messina Joaquin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ArrayPassenger.h"
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);

	passenger pasajeros[CANTPAS];

	initPassengers(pasajeros, CANTPAS);

	harcodeo(pasajeros,CANTPAS);

	menuPasajeros(pasajeros, CANTPAS);

	return EXIT_SUCCESS;
}
