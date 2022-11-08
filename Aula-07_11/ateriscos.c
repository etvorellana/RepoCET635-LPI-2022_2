#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 100; i++)
    {
        printf("*");
        printf(" ");
        if(i%10 == 0){
            printf("\n");
            if((i/10)%2)
                printf(" ");
        }
    }

    printf("Solução com dois for\n");
    for(int linha = 1; linha <= 10; linha++)
    {
        for(int coluna = 1; coluna <= 10; coluna++)\
        {
            printf("* ");
        }
        printf("\n");
        if(linha%2 == 1)
            printf(" ");
    }    

    return 0;
}