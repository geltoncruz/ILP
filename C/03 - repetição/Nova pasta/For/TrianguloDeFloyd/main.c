#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n,i,j,c = 0;
    printf("Informe a qtd de linhas: \n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}
