#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   int mat[3][3],i,j,vet[3];
   for(i = 0; i < 3; i++){
    for(j = 0 ; j < 3; j++){
        mat[i][i] = rand() % 100;
    }
   }



    return 0;
}
