#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include <time.h>
#include "vector_utils.h"








int main() {
	int tama�o = 10;
	vector vector_prueba =	create_zero_vector(tama�o);
	log_vector(&vector_prueba);

	float media = mean(vector_prueba);
	float varianza = var(vector_prueba);
	float stand = stad(vector_prueba);


	printf("media %f\n", media);
	printf("varianza %f\n", varianza);
	printf("std %f\n", stand);



}