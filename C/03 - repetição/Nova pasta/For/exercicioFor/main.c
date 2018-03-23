#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 5; i<=501;i++)
    {
        if(i % 2 == 1){
            printf("%d, ",i*2);
        }
    }
    return 0;
}
