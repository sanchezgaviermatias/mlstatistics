typedef  struct vector {
	float* data;
	int size;
}vector;





double get_random() { return (double)rand() / (double)RAND_MAX; };


void view_vector(vector* X) {
	for (int i = 0; i < X->size; i++) {
		printf("el valor en el indice %d es %.4f\n", i, (X->data)[i]);
	}
}



vector create_zero_vector(int size) {
	float* data = (float*)calloc(size, sizeof(float));
	vector mi_vector;

	int i;
	for (int i = 0; i < size; i++) {
		data[i] = 2;
	}

	mi_vector.data = data;
	mi_vector.size = size;
	return mi_vector;
}

float mean(vector vector) {
	float mean;
	float sum = 0.0;

	for (int i = 0; i < vector.size; i++) {
		sum += vector.data[i];
	

	}

	mean = sum / ((float)vector.size);
	return mean;
}



float var(vector vector) {
	float media = mean(vector);
	float sqr_dif = 0;
	for (int i = 0; i < vector.size; i++) {
		sqr_dif += (vector.data[i] - media) * (vector.data[i] - media);

	}
	float variance = sqr_dif / (float)vector.size;
	return variance;
}


float stad(vector mivector) {
	float mivarianza = var(mivector);
	float posta_var = mivarianza * (float)(mivector.size- 1) / (float)mivector.size;
	return posta_var;
}




void log_vector(vector* X) {

	for (int i = 0; i < X->size; i++) {
		(X->data)[i] = log((X->data)[i]);
	}
}




