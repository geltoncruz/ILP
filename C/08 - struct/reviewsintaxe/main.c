#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[30];
    int idade;
    char endereco[100];
};

int main()
{
    struct Pessoa p1;
    printf("Informe seu nome: \n");
    gets(p1.nome);

    fflush(stdin);

    printf("Informe sua idade:\n");
    scanf("%d",&p1.idade);

    fflush(stdin);

    printf("Informe seu endereço:\n");
    gets(p1.endereco);


    printf("Seu nome e %s.\n Sua idade eh:%d. \nSeu Endereco eh %s ",p1.nome,p1.idade,p1.endereco);

    return 0;
}
