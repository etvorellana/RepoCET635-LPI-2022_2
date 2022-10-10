#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("Valor de ponto flutuante: %f\n", 123.456);
    printf("Tamanho de um float: %d\n", sizeof(float));
    printf("Tamanho de um double: %d\n", sizeof(double));
    printf("Tamanho: %d\n", sizeof(123.456));
    printf("Tamanho: %d\n", sizeof(123.456f));
    printf("Tamanho: %d\n", sizeof((float)123.456));
    return 0;
}