#include <stdio.h>

/*
    Escreva um programa que leia um número inteiro e informe 
    se ele é par ou ímpar.
*/

int main(void)
{
    int val;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &val);
    // variações deste implementaçõ
    (val % 2 == 0) ? printf("%d é par!!!\n", val) : printf("%d é impar!!!\n", val);
    (val % 2 != 1) ? printf("%d é par!!!\n", val) : printf("%d é impar!!!\n", val);
    (!(val % 2)) ? printf("%d é par!!!\n", val) : printf("%d é impar!!!\n", val);
    (val % 2 < 1) ? printf("%d é par!!!\n", val) : printf("%d é impar!!!\n", val);
    (val % 2 - 1) ? printf("%d é par!!!\n", val) : printf("%d é impar!!!\n", val);
    // Sugestão:
    // Se inverter a ordem no operador como colocar a condição
    // tente criar 5 variações como nos exemplos anteriores
    //( ... ) ? printf("%d é impar!!!\n", val) : printf("%d é par!!!\n", val);
    return 0;
}