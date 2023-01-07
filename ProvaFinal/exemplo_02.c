#include <stdio.h>  //printf scanf

int main(void)
{
    int tam;
    char triang[10][11];
    do{
        printf("Entre com o tamanho do triangulo.\n");
        printf("(0 < tam <= 10): ");
        scanf("%d", &tam);
    }while(tam <= 0 || tam > 10);

    printf("Triangulo 1\n");
    
    for (int i = 0; i < tam; i++) // controla quantas linhas
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            //printf("*");
            triang[i][j] = '*';
        }
        triang[i][j] = '\0';
    }
    
    for(int i = 0; i < tam; i++)
    {
        printf("%s\n", triang[][i]);
    }

    printf("Triangulo 2\n");

    for (int i = 0; i < tam; i++) // controla quantas linhas
    {
        int j;
        for (int j = 0; j < tam - i; j++)
        {
            //printf("*");
            triang[i][j] = '*';
        }
        triang[i][j] = '\0';
    }

    for(int i = 0; i < tam; i++)
    {
        printf("%s\n", triang[i]);
    }


    /*
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
    */
    return 0;
}