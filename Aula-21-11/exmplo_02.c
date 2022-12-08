#include <stdio.h>
#include <stdlib.h>
#include "exemplos.h"


int main(void)
{
    int n;
    char ch1 = '*', ch2 = ' ';
    printf("Vamos imprimir um quadrado de asteriscos.\n");
    printf("Entre com o tamanho do quadrado\n");
    n = lerInteiro(0, 20);
    imprimeQuadrado(n, ch1);
    printf("_______________________\n");
    imprimeQuadradoV(n, ' ', '*');
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

void imprimeLinhaV(int n, char ch1, char ch2)
{
    printf("%c", ch1);
    for(int j = 1; j < n - 1; j++)
        printf("%c", ch2);
    printf("%c\n", ch1);
}

void imprimeQuadrado(int n, char ch1)
{
    for(int i = 0; i < n; i++)
        imprimeLinha(n, ch1); //imprime uma linha
}

void imprimeQuadradoV(int n, char ch1, char ch2)
{
    imprimeLinha(n, ch1); // primeira linha
    for(int i = 1; i < n - 1; i++)
        imprimeLinhaV(n, ch1, ch2);
    imprimeLinha(n, ch1);// última linha
}