/*
 * utn.h
 *
 *  Created on: 14 may. 2022
 *      Author: JoaX
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getInt(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
int utn_getCaracter(char pResultado[], int len, char* mensaje, char* mensajeError, int reintentos);
int utn_getNumeroFloat (float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int myGetsInt(char *cadena,int longitud);
#endif /* UTN_H_ */
