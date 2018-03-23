#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1,nota2,nota3,media;
  printf(".:: BULITIN ONLINE ::.\n");
  printf("Informe as notas:\n");
  scanf("%f",&nota1) ;
  printf("Informe sua segunda nota:\n");
  scanf("%f",&nota2) ;
  printf("Informe sua terceira nota:\n");
  scanf("%f",&nota3) ;

  media = (nota1+nota2+nota3) / 3;
  printf("\n Sua nota eh : %.2f",media);
    return 0;
}
