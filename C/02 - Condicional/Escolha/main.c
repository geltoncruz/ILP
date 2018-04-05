#include <stdio.h>

int main () {

	int opt = 0;

	printf("MENU\n");

	printf("1 - Hamburger\n");
	printf("2 - Batata Frita\n");
	printf("3 - Refrigerante\n");
	printf("4 - Sair\n");
	
	printf("Escolha: ");
	scanf("%d", &opt);

	switch(opt){

		case 1:
			printf("> Voce escolheu Hamburger!\n");
			break;

		case 2:
			printf("> Voce escolheu Batata Frita!\n");
			break;

		case 3:
			printf("> Voce escolheu Refrigerante!\n");
			break;

		case 4:
			break;
	}

	return 0;
}

