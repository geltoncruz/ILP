#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    scanf("%d",&numero);

    if(numero < 0)
    {
        printf("Numero negativo");
    }else
    {
        printf("Numero Positivo");
    }
    return 0;
}
