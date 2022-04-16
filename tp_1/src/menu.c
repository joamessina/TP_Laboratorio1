/*
 * menu.c
 *
 *  Created on: 14 abr. 2022
 *      Author: JoaX
 */


#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void menuInicio(){
    setbuf(stdout, NULL);
    int opcion;
    int km;
    char seguir;
    float precioLatam;
    float precioAerolineas;
    int flagAerolineas = 0;
    int flagLatam = 0;
    int flagKm = 0;
    int flagSalir = 0;
    float tarjetaCreditoAerolineas;
    float tarjetaDreditoAerolineas;
    float tarjetaCreditoLatam;
    float tarjetaDreditoLatam;
    float btcLatam = 0;
    float btcAerolineas;
    float precioKMLatam;
    float precioKMAerolineas;
    float diferenciaPrecio;


    do{
        printf("1. Ingresar Kilómetros: \n");
        printf("2 .Ingresar Precio de Vuelos: \n");
        printf("3 .Calcular todos los costos: \n");
        printf("4 .Informar Resultados: \n");
        printf("5 .Carga forzada de datos: \n");
        printf("6 .Salir: \n");
    	opcion= pedirOpcion("Bienvenido ingrese una opcion: \n");
    	separador();

        switch(opcion) {
            case 1:
                km= pedirNumeroKM("Ingrese kilometros: \n");
                flagKm = 1;
                flagAerolineas=0;
                flagLatam=0;
                break;
            case 2:
                precioAerolineas= pedirPrecio("Ingrese precio de vuelo de Aerolineas \n");
                precioLatam = pedirPrecio("Ingrese precio de vuelo de Latam \n");
                break;
            case 3:
                if(precioAerolineas > 0 && precioLatam >0){
                    tarjetaCreditoAerolineas = tarjetaCredito(precioAerolineas);
                    tarjetaDreditoAerolineas = tarjetaDebito(precioAerolineas);
                    btcAerolineas = totalBTC(precioAerolineas);
                    precioKMAerolineas = precioKilometros(precioAerolineas, km);
                    tarjetaCreditoLatam = tarjetaCredito(precioLatam);
                    tarjetaDreditoLatam = tarjetaDebito(precioLatam);
                    btcLatam = totalBTC(precioLatam);
                    precioKMLatam = precioKilometros(precioLatam, km);
                    diferenciaPrecio = diferenciaLatAero(precioKMAerolineas, precioKMLatam);
                    printf("Se ha calculado todo \n");
                }else{
                    printf("No se han ingresado todos los datos \n");
                }
                break;
            case 4:
            mostrar(km,precioAerolineas, precioLatam, tarjetaCreditoAerolineas, tarjetaDreditoAerolineas,  btcAerolineas, precioKMAerolineas, tarjetaCreditoLatam, tarjetaDreditoLatam, btcLatam, precioKMLatam, diferenciaPrecio);
                break;
            case 5:
                km=7090;
                precioAerolineas=162965;
                precioLatam=159339;

                tarjetaCreditoAerolineas = tarjetaCredito(precioAerolineas);
                    tarjetaDreditoAerolineas = tarjetaDebito(precioAerolineas);
                    btcAerolineas = totalBTC(precioAerolineas);
                    precioKMAerolineas = precioKilometros(precioAerolineas, km);
                    tarjetaCreditoLatam = tarjetaCredito(precioLatam);
                    tarjetaDreditoLatam = tarjetaDebito(precioLatam);
                    btcLatam = totalBTC(precioLatam);
                    precioKMLatam = precioKilometros(precioLatam, km);
                    diferenciaPrecio = diferenciaLatAero(precioKMAerolineas, precioKMLatam);
                mostrar(km,precioAerolineas, precioLatam, tarjetaCreditoAerolineas, tarjetaDreditoAerolineas,  btcAerolineas, precioKMAerolineas, tarjetaCreditoLatam, tarjetaDreditoLatam, btcLatam, precioKMLatam, diferenciaPrecio);
                break;
            case 6:
                printf("Gracias por usar el programa \n");
                flagSalir = 1;
                break;
            break;
        }

    if(flagSalir == 0){
        printf("Desea continuar? \n");
        scanf("%c",&seguir);
    } else{
        break;
    }

    }while(opcion != 6);
}
