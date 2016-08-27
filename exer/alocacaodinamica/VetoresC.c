int *CriaVetInt(int tamanho) {
	int *ptr;
	ptr = (int*) malloc(sizeof(int) * tamanho);
	return ptr;
}

float *CriaVetFloat(int tamanho) {
	float *ptr;
	ptr = (float*) malloc(sizeof(float) * tamanho);
	return ptr;
}