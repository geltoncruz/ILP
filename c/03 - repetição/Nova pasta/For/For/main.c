#include <stdio.h>
#include <stdlib.h>
//1,1,2,3,5,8,13,21,34,
int main()
{

    int n,i,ant,prx,aux;
    printf("Informe um valor");
    scanf("%d",&n);
    ant = 0 ;
    prx = 1 ;
    printf("%d",prx);
    for(i=0;i<n;i++){

        aux = ant+prx;
        ant = prx;
        prx = aux;

        printf("%d",aux);
    }
    return 0;
}
