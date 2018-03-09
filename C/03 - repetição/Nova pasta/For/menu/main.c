#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opt;
    float n1,n2;
        printf("Informe dois valores:\n");
        scanf("%f",&n1);
        scanf("%f",&n2);
    do{
        printf("\n01 - adição\n");
        printf("02 - subtração\n");
        printf("03 - multiplicacao\n");
        printf("04 - Divisao\n");
        printf("05 - sair\n");
        printf("Escolha uma opcao\n:");
        scanf("%d",&opt);

        switch(opt){
            case 1:
                printf("O valor da soma de %.2f e %.2f eh %f",n1,n2,n1+n2);
                break;
            case 2:
            printf("O valor da subt de %.2f e %.2f eh %f",n1,n2,n1-n2);
            break;
            case 3:
                printf("O valor da soma de %.2f e %.2f eh %.2f",n1,n2,n1*n2);
                break;
            case 4:
                printf("O valor da soma de %.2f e %.2f eh %.2f",n1,n2,n1/n2);
                break;
            case 5:
            default:
                printf("Opcao invalida");

        }
    }while(opt != 5);

    return 0;
}
