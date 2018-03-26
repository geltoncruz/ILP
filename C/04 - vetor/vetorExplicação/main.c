#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int vagasEstacionamento[5],i;

    for(i = 0; i < 5; i++){
        printf("\nInforme o n. do carro na posica %i: ",i);
        vagasEstacionamento[i] = rand() % 100;
    }
    for(i = 0; i < 5; i++){
        printf("\nCarro %d esta na posicao %d",vagasEstacionamento[i],i);
    }

    return 0;
}
