#include <stdio.h>
#include <stdlib.h>
struct pilha{
    int x;
    char c;
};


int main()
{

    int *v = malloc(sizeof(int)*4);
    for(int i = 0; i <= 4; i++ ){
            scanf("%d",v[i]);
    }

    for(int i = 0; i <= 4; i++ ){
            printf("%d",v[i]);
    }




    printf("char %dbytes\n",sizeof(char));
    printf("int %dbytes\n",sizeof(int));
    printf("float %dbytes\n",sizeof(float));
    printf("double %dbytes\n",sizeof(double));
    printf("pilha %dbytes\n",sizeof(struct pilha));



    return 0;
}
