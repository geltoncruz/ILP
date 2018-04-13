#include <stdio.h>
#include <stdlib.h>
#define MAX 25

struct Endereco{
    char nomeRua[100];
    int numeroCasa;
};
struct Pessoa{
    char nome[50];
    int idade;
    struct Endereco address;
};


struct Dimen_2d{
    int x,y;
};

struct Dimen_3d{
    int x,y,z;
};

int main()
{
    int numero[5];
    struct Pessoa person[5];


    struct Pessoa p1[2];
    p1[0].idade = 33;
    struct Pessoa p2;
    printf("\nInforme Nome: \n");


    struct Dimen_2d obj1;
    struct Dimen_3d obj2;
    obj1.x = 11;
    obj1.y = 20;

    obj2.x = obj1.x;

    printf("%d",obj2.x);

    return 0;
}
