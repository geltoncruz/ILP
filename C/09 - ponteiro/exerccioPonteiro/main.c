#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*p,*q;
    p = &a;
    q = &b;

    if(p != q){
        if(p > q){
            printf("Endereço p é maior :%x ",p);
        }else{
            printf("Endereço q é maior :%x",q);
        }
    }

    return 0;
}
