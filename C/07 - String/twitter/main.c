#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int i;
    char nick[20];
    char twit[140];
    printf("Informe seu nick:\n");
    gets(nick);
    printf("Informe seu twitte:\n");
    gets(twit);

    if(strlen(twit) > 140){
        printf("Infelizmente não poderemos publicar .\nSeu twitt possui mais que 140 caracteres");
    }else{
        printf("@%s publicou:\n \" %s \"\n %d caracteres",nick,twit,strlen(twit));
    }

    return 0;
}
