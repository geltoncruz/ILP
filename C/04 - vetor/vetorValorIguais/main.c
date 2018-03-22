#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5],i,j,qtd=0;

    for(i = 0 ; i < 5; i++){
        scanf("%d",&vetor[i]);
    }

    for( i = 0; i < 5 ; i++)
    {
      for(j = i+1; j < 5; j++){
        if(vetor[i] == vetor[j]){
            qtd++;
        }
      }
    }
    printf("Valores repetidos %d",qtd);
    return 0;
}
