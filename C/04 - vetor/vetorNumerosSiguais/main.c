#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5],i,j,qtd=0;

    for(i = 0; i < 5; i++){
        scanf("%d",&vet[i]);
    }
    for(i = 0; i < 5; i++){
       for(j = i+1; j < 5; j++){
        if(vet[i] == vet[j]){
            qtd++;
        }
       }
    }

    printf("%d Total: ",qtd);
    return 0;
}
