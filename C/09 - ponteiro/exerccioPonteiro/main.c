#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*p,*q;
    p = &a;
    q = &b;

    if(p != q){
        if(p > q){
            printf("Endere�o p � maior :%x ",p);
        }else{
            printf("Endere�o q � maior :%x",q);
        }
    }

    return 0;
}
