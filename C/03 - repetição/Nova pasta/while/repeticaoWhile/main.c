#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float nota,media;
    printf("..::Cadastro de nota::..");
    while(i < 3)
    {
        printf("\nInforme a nota %d:\n",i+1);
        scanf("%f",&nota);
        media += nota;
        i++;
    }
    media = media/i;
    printf("media : %.2f",media);
    return 0;
}
