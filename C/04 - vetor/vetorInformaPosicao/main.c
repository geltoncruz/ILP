#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int vetor[20],i,n;
    for(i = 0; i < 20 ; i++){
        vetor[i] = rand() % 100;
    }
     printf("Informe uma posicao valida:\n");
     scanf("%d",&n);
    for(i = 0; i < 20; i++){
        if(i == n){
            printf("%d",vetor[i]);
        }
    }
    for(i = 0; i < 20; i++){
       printf("posicao %d valor %d\n,",i,vetor[i]);

    }
    return 0;
}
