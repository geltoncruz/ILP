#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[11];
    gets(n);


    switch(n[3])
    {
        case '9':
            switch(n[4])
            {
                case '1': case '2':
                    printf("tim");
                break;
                case '9' : case '8':
                    printf("vivo");
                    break;
                default:
                        printf("erro");


            }
            break;
                case '8':
                    switch(n[4])
                    {
                        case '7': case '8':
                            printf("OI");
                            break;
                        case '1' : case '2':
                            printf("Claro");
                            break;
                         default:
                        printf("erro");
                    }
                    default:
                        printf("erro");
    }

    return 0;
}
