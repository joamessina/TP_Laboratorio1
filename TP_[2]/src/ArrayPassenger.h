/*
 * ArrayPassenger.h
 *
 *  Created on: 14 may. 2022
 *      Author: JoaX
 */


#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 51
#define CODV 10
#define CANTPAS 2000

#define LIBRE 0
#define OCUPADO 1

#define ACTIVO 1
#define DESACTIVADO 0

#define REINTENTOS 3



typedef struct
{
	int id;
	char name[TAM];
	char lastname[TAM];
	float price;
	char flycode[CODV];
	int typrPassenger;
	int statusFlight;
	int isEmpty;

}passenger;


////@brief inicializa todo el string en 0
////@fn int initPassengers
////@param album list[]
////@param int tam
////@retur 0 | -1
int initPassengers(passenger listPasajeros[],int tam);
////@brief cargo 1 lugar del string de la estructura album
////@fn int addPassenger(passenger list[]);
////@param album list[]
////@return 0 | -1
int addPassenger(passenger list[]);
////@brief verifica si el id ingresado por usuario es igual al id que esta cargado en el string
////@fn int findPassengerById
////@param passenger list[]
////@param int len()
////@param int id()
////@return id | -1
int findPassengerById(passenger list[], int len,int id);
////@brief borra de manera logica los datos del string
////@fn int removePassenger(passenger list[], int len, int id)
////@param album list[]
////@param int len()
////@param int id()
////@return 0 |-1
int removePassenger(passenger list[], int len, int id);
////@brief modifica uno de los campos que esta cargado en el string
////@fn int modificarPasajeros(passenger *list ,int len,int idMod)
////@param pasajeros list[]
////@param int len()
////@param int idMod()
////@return 0 | -1
int modificarPasajeros(passenger *list ,int len,int idMod);
////@brief esqueleto de todo el programa , lugar donde estan todas las opciones y funcionalidades
////@fn void menuPasajeros(passenger list[], int len);
////@param passenger list[]
////@return no se retorna nada (void)
void menuPasajeros(passenger list[], int len);
////@brief busca un lugar libre en la estructura pasajeros viendo si la cantidad del string no este llena
////@fn int bucarLibre(passenger pPasajeros[], int len);
////@param passenger list[]
////@param int len()
////@return retorna el lugar disponible
int bucarLibre(passenger pPasajeros[], int len);
////@brief imprime los datos de la estructura pasajeros
////@fn int imprimir (passenger list[], int tam);
////@param passenger list[]()
////@param int tam()
////@return no se retorna nada (void)
int imprimir (passenger list[], int tam);
////@brief todos las opciones de informes
////@fn void opcionesInformes(void);
////@param no hay parametros es (void)
////@return no se retorna nada (void)
void opcionesInformes(void);
////@brief todos las opciones de menu
////@fn void menu (void);
////@param no hay parametros es (void)
////@return no se retorna nada (void)
void menu (void);
////@brief todos las opciones de modificar
////@fn void selecModificar();
////@param no hay parametros es (void)
////@return no se retorna nada (void)
void selecModificar();
////@brief suma todos los importes
////@fn int totalInforme( album list[],int len,float*promedio);
////@param album list[]()
////@param int len()
////@param float *promedio()
////@return retorno total
int totalInforme(passenger list[], int len,float*promedio);
////@brief calcula el promedio
////@fn float promedioInforme(int contPasajeros , int totalPasajeros );
////@param int contPasajeros()
////@param int totalPasajeros ()
////@return retorno el promedio
float promedioInforme(int contPasajeros , int totalPasajeros );
////@brief cantidad de pasajeros que superan al promedio
////@fn int superPasajeros(passenger list[], int len, float promedio);
////@param passenger list[]
////@param int len()
////@param float promedio()
////@return retorno la cantidad de pasajeros que superan el promedio
int superPasajeros(passenger list[], int len, float promedio);
////@brief carga de datos a estructura pasajeros
////@fn void harcodeo(passenger lista[],int tam);
////@param passenger list[]
////@param int tam()
////@return no se retorna nada (void)
void harcodeo(passenger lista[],int tam);

#endif /* ARRAYPASSENGER_H_ */

