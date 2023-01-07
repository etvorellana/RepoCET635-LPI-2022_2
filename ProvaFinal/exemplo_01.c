#include <stdio.h>  //printf scanf

int main(void)
{
    int tam;
    do{
        printf("Entre com o tamanho do triangulo.\n");
        printf("(0 < tam <= 10): ");
        scanf("%d", &tam);
    }while(tam <= 0 || tam > 10);

    printf("Triangulo 1\n");
    //printf("*");
    //printf("\n");

    //for (int i = 0; i < tam; i++) 
    for (int i = 1; i <= tam; i++) // controla quantas linhas
    {
        //for (int j = 0; j < =i; j++)
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Triangulo 2\n");
    
    for (int i = tam; i >= 1; i--) // controla quantas linhas
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Triangulo 2*\n");

    for (int i = 1; i <= tam; i++) // controla quantas linhas
    {
        for (int j = 1; j <= tam + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Triangulo 3\n");

    for (int i = 1; i <= tam; i++) // controla quantas linhas
    {
        for (int j = 1; j <= tam - i ; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


}