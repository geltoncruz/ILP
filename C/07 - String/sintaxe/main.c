#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    1. Crie um programa para o twitter que verifique se o
    texto digitado em uma string contem 140 caracteres.

    2. Crie um programa Verifique qual a
    primeira vogal digitada em uma string.

    3. Crie um programa que recerá uma string e
    reescreverá seu conteúdo inverso. Ex: Casa -> asac


    char nome[20];
    char nome2[20];
    int i;
    nome[0] = 'G';
    nome[1] = 'e';
    nome[2] = 'l';
    nome[3] = '\0';
    scanf("%s",&nome);
    gets(nome);

    printf("%d\n",strlen(nome));

   printf("Tamanho da palavra e %d:",i);

    gets(nome2);
    printf("O nome digitado foi: %s",nome);

    strcpy(nome2, nome);
    nome2[1] = 'g';
    strcat(nome2,nome);
    printf("%d\n",strcmp(nome2,nome));
    printf("\nO nome copiado foi: %s",nome2);
    return 0;
}
