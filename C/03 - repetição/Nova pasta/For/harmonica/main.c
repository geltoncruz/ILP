#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float h;
    printf("Informe um valor para calcular sua harmonica:\n");
    scanf("%d",&n);

    if(n >= 1)
    {
        for(i = 1; i <= n; i++)
        {
          h += 1.0 / i;
            printf("1/%d + ",i);
        }
        printf("\n Resultado: %.4f\n",h);
    }
    return 0;
}
