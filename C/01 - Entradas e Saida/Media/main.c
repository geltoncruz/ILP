#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

	printf("\t.:: BOLETIM ONLINE ::.\n\n");
	printf("NOTA 1:\t\t\t ");
	scanf("%f", &nota1);

	printf("NOTA 2:\t\t\t ");
	scanf("%f", &nota2);

	printf("NOTA 3:\t\t\t ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("\n==========================\n");
	printf("MEDIA:\t\t\t%2.f\n",media);

    return 0;
}
