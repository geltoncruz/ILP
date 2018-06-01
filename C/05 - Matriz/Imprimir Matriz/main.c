#include <stdio.h>
#include <stdlib.h>

int main() {

	int mat[2][5];

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d",&mat[i][j]);
		}
	}

	printf("\n");

	for(int x = 0; x < 2; x++) {
		for (int y = 0; y < 5; y++) {
			printf(" %d ", mat[x][y]);
		}

		printf("\n");
	}	

	return 0;
}
