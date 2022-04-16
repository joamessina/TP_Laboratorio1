/*
 * biblioteca.h
 *
 *  Created on: 14 abr. 2022
 *      Author: JoaX
 */

#ifndef  BIBLIOTECA_H
#define BIBLIOTECA_H
#define BTC 4606954.55

float tarjetaDebito(float precio);
float tarjetaCredito(float precio);
float totalBTC(float precio);
int pedirNumeroKM(char mensaje[]);
float pedirPrecio(char mensaje[]);
int pedirOpcion(char mensaje[]);
float precioKilometros(float precio, int kilometros);
float diferenciaLatAero(float precioKMAero, float precioKMLatam);
void menuInicio(void);
void separador(void);
void mostrar(int kilometros,float precioVueloAero, float precioVueloLatam, float tarjetaDAero,float tarjetaCAero, float btcAero, float precioKMaero,float tarjetaDLatam,float tarjetaCLatam,float btcLatam,float precioKmLatam,float diferencia);
#endif
