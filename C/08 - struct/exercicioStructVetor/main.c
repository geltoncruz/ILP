#include <stdio.h>
#include <stdlib.h>
struct Aluno {
    char nome[50];
    char curso[100];
    int matricula;
};
int main()
{
    int i;
    struct Aluno vetAluno[5];

    for(i = 0 ; i < 5; i++){
        printf("Informe seu nome:\n");
        gets(vetAluno[i].nome);
        fflush(stdin);
        printf("Informe seu Curso:\n");
        gets(vetAluno[i].curso);
        fflush(stdin);
        printf("Informe seu Matricula:\n");
        scanf("%d",&vetAluno[i].matricula);
        fflush(stdin);
    }

    return 0;
}
