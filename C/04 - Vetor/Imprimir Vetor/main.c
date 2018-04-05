#include <stdio.h>
#include <stdlib.h>

int main () {

	int vet[10];

	for(int i = 0; i < 10; i++){
		vet[i] = rand() % 100;
	}

	for(int j = 0; j < 10; j++){
		printf("%d, ", vet[j]);
	}

	printf("\n");

	return 0;
}
