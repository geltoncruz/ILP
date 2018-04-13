#include <stdio.h>
#include <stdlib.h>

int main()
{
   char palavra[20];
   char vogais[10] = {"aeiouAEIOU"};
   int i,j;
   printf("Informe uma palavra:\n");
   gets(palavra);
   for(i = 0 ; i < 20 ; i++){
     for(j = 0; j < 10 ; j++){

        if(vogais[j] == palavra[i]){
            printf("%c",vogais[j]);
            break;
        }
     }
   }
    return 0;
}
