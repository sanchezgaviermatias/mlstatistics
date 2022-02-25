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



Estimador estimate(char* nombre_distribucion) {

	switch{
	}

}


#endif