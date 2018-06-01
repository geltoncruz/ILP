#include <stdio.h>
#include <stdlib.h>

/*
 * Declaração da função:
 * É de bom costume deixar a função main() no topo do arquivo.
 * Porém main() não pode usar funções que foram descritas depois dela.
 * Portanto é nescessário declarar que as funções existem antes de main() e descrevê-las depois.
 */
float regra_de_3(float, float, float); // Note que na declaração somente o tipo das variáveis é nescessário.

int main() {

	printf("\n%2.f\n", regra_de_3(100, 100, 10));
    	
	return 0;
}

float regra_de_3 (float v1, float v2, float v3) {

	return (v1*v3)/v2;
}
