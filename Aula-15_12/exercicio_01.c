#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[16];
    double val;
    printf("Entre com um número de ponto flutuante: ");
    fgets(str, 16, stdin);
    val = atof(str)
    return 0;
}
