#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;
    for(i = 1;i<=5;i++){
        for(j=1;j<=i;j++){
        a++;
            printf(" %d ",a);
        }
        printf("\n");
    }
    return 0;
}
