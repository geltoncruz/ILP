#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int tamanhoPe[10],i;

        for(i=0;i<=9;i++){
            tamanhoPe[i] = rand() % 100;
        }

       for(i=0;i<=9;i++){
        if(i % 2 == 1){
            printf("%d\n",tamanhoPe[i]*3);
        }else
        {
            printf("%d\n",tamanhoPe[i]*2);
        }
       }
    return 0;
}
