#include "std_libs.h"
#define MAX_NAME 256
#define TABLE_SIZE 100

typedef struct {
	char name[MAX_NAME];
} Estimador;



Estimador* hash_table[TABLE_SIZE];


// Toma un caracter  devuelve un número  entero random;
unsigned int hash( const char *name) {
	int length = strnlen(name, MAX_NAME);
	unsigned int hash_value = 0;
	for (int i = 0; i < length; i++) {
		hash_value += name[i];
		hash_value = (hash_value * name[i]) %TABLE_SIZE;
	}
	return hash_value;
}


void init_hash_table() {
	for (int i = 0; i < TABLE_SIZE; i++) {
		hash_table[i] = NULL;
	}
}




void print_table() {
	for (int i = 0; i < TABLE_SIZE; i++) {

	}
}




