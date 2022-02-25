#ifndef ESTIMADOR_H
#define ESTIMADOR_H

#include "std_libs.h"


typedef struct Parametro {
	char nombre[100];
	float value;
} Parametro;



typedef struct Estimador {
	char distribucion[100];
	Parametro *parametros;
	int n_p; //cantidad de parámetros
} Estimador ;



void estimate(  char *  nombre_distribucion) {
	if (strcmp(nombre_distribucion, "normal") == 0)
	{
		printf("nomral");
	}
	else if (strcmp(nombre_distribucion, "beta") == 0)
	{
		printf("beta");
	}
	else 
	{
		printf("no valido");
	}
}


#endif