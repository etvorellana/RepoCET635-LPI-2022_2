#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a, b, c;

    printf("Insira o valor a ser computado: ");
    scanf("%d", &a);

    b = 6;
    c = ( a % b ) + 1;

    printf("O resultado e: %d", c);

    

    return 0;
}