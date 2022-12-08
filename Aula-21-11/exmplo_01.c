#include <stdio.h>
#include <stdlib.h>
#include "exemplos.h"


int main(void)
{
    int n;
    printf("Vamos imprimir um quadrado de asteriscos.\n");
    printf("Entre com o tamanho do quadrado\n");
    n = lerInteiro(0, 20);

    /*
    do{
        scanf("%d", &n);
    }while (n <= 0 || n > 20);
    */

    for(int i = 0; i < n; i++)
    {
        //imprime uma linha
        imprimeLinha(n, '*');
        /*
        for(int j = 0; j < n; j++)
            printf("*");
        printf("\n"); // pula para próxima linha
        */
    }
    printf("_______________________\n");
    // primeira linha
    imprimeLinha(n, '*');
    /*
    for(int j = 0; j < n; j++)
        printf("*");
    printf("\n");
    */
    for(int i = 1; i < n - 1; i++)
    {
        printf("*");
        for(int j = 1; j < n - 1; j++)
            printf(" ");
        printf("*\n");
    }
    // última linha
    imprimeLinha(n, '*');
    /*
    for(int j = 0; j < n; j++)
        printf("*");
    printf("\n");
    */
    return 0;
}


int lerInteiro(int min, int max)
{
    int n;
    printf("Entre com um valor inteiro (%d < n <= %d): ", min, max);
    do{
        scanf("%d", &n);
        if (n <= min || n > max)
         printf("Valor fora do intervalo\n");
    }while (n <= min || n > max);
    return n;
}

void imprimeLinha(int n, char tag)
{
    for(int j = 0; j < n; j++)
        printf("%c", tag);
    printf("\n");
}