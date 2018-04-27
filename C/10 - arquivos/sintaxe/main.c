#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   FILE *f;
   int i;
   char c;
   f = fopen("file2.txt","r");
   for(i = 0; i<= 100; i++){
    c = fgetc(f);
    if(c == ','){
        printf("\n");
    }
    printf("%c",c);
   }
   fclose(f);
   /*f = fopen("file2.txt","a+");
   char nome[20] = ", João Vitor ";
   for(i = 0; i < strlen(nome); i++ ){
    fputc(nome[i],f);
    fputc(' ',f);
   }
   fclose(f);
   */

    return 0;
}
