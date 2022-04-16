/*
 * biblioteca.c
 *
 *  Created on: 14 abr. 2022
 *      Author: JoaX
 */


/*
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir

*/

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


void mostrar(int kilometros, float precioAerolineas, float precioLatam, float tarjetaCreditoAerolineas, float tarjetaDreditoAerolineas, float btcAerolineas, float precioKMAerolineas, float tarjetaCreditoLatam, float tarjetaDreditoLatam, float btcLatam, float precioKMLatam, float diferenciaPrecio){
    printf("Kilómetros: %d \n", kilometros);

    printf("Precio Aerolineas: %.2f \n", precioAerolineas);
    printf("Tarjeta de débito Aerolineas: %.2f \n", tarjetaDreditoAerolineas);
    printf("Tarjeta de crédito Aerolineas: %.2f \n", tarjetaCreditoAerolineas);
    printf("Bitcoin Aerolineas: %.7f \n", btcAerolineas);
    printf("Precio por kilometro Aerolineas: %.2f \n", precioKMAerolineas);

    printf("Precio Latam: %.2f \n", precioLatam);
    printf("Tarjeta de crédito Latam: %.2f \n", tarjetaCreditoLatam);
    printf("Tarjeta de débito Latam: %.2f \n", tarjetaDreditoLatam);
    printf("Bitcoin Latam: %.7f \n", btcLatam);
    printf("Precio por kilometro Latam: %.2f \n", precioKMLatam);

    printf("Diferencia de precio: %.2f \n", diferenciaPrecio);
}

float tarjetaDebito(float precio){
	float retornar;
	retornar = precio-(10*precio)/100;
	return retornar;
}

float tarjetaCredito(float precio){
    float retornar;
    retornar = precio+(25*precio)/100;
    return retornar;
}

float totalBTC(float precio){
    float total;
    total = precio/BTC;
    return total;
}

float precioKilometros(float precio, int km){
    float total;
    total = precio*km;
    return total;
}

float diferenciaLatAero(float precioKMAerolineas, float precioKMLatam){
    float diferencia;
    if(precioKMAerolineas > precioKMLatam){
        diferencia = precioKMAerolineas - precioKMLatam;
    }else{
        diferencia = precioKMLatam - precioKMAerolineas;
    }
    return diferencia;
}

int pedirNumeroKM(char mensaje[]){
	int numero;
	printf("%s",mensaje);
	scanf("%d",&numero);

	while(numero < 1){
		printf("Error, vuelva a ingresar un numero \n");
		scanf("%d", &numero);
	}

	return numero;

}

float pedirPrecio(char mensaje[]){
	float numero;
	printf("%s",mensaje);
	scanf("%f",&numero);

	while(numero < 1){
		printf("Error, vuelva a ingresar un numero \n");
		scanf("%f", &numero);
	}

	return numero;

}

int pedirOpcion(char mensaje[]){
	int numero;
	printf("%s",mensaje);
	scanf("%d",&numero);

	while(numero < 1 || numero > 6){
		printf("Error, vuelva a ingresar un numero \n");
		scanf("%d", &numero);
	}

	return numero;

}

void separador(void){
	printf("-------------------------\n");
}
