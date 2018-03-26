#include <stdio.h>
#include <stdlib.h>
#define MAXLIN = 5
#define MAXCOL = 5
int main()
{
    //tipo NomeDoVetor[]
    int i,j;
    int vet[5] = {0,10,50,20,30};
    int cub[3][3][3][3];
    //int mat[2][5] = {{1,2,3,4,5},{5,6,7,8,9,0}}
    int mat[][5] = {1,2,3,4,5,5,6,7,8,9,0}

    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            scanf("%d",&mat[i][j]);
        }
    }



    printf("%d\n",vet[0]);
    printf("%d\n",vet[1]);
    printf("%d\n",vet[2]);
    printf("%d\n",vet[3]);
    printf("%d\n",vet[4]);
    return 0;
}
