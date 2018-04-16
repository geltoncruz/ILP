#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variável é uma aloção física na memoria do computador;
    int vet[10];
    int *p = &vet[9];

    *p = 12;
    printf("Vet[9] == %d",vet[9]);
    printf("*p == %d",p);

    printf("End Vetor %d\n ",&vet);
    printf("%d\n",&vet[0]);
    printf("%d\n",&vet[1]);
    printf("%d\n",&vet[2]);
    printf("% ...\n ");
    printf("%d\n",&vet[9]);
    /*int n = 5;
    int *p = &n;
    char *a = ;
    *p = 10;
    printf("%d",*p);
    printf("\n");
    p++;
    p++;
    p++;
    printf("%d\n", p);
    printf("%d", &n);
    printf("\n");
    printf("%d",sizeof(int));
    printf("\n");
    printf("\%i", a);

    //tipoDoPonteiro *nomePonteiro

    printf(" -Ponteiros!\n");
*/
    return 0;
}
