#include <stdio.h>
#include <stdlib.h>

int main (void){

    unsigned long int a;

    printf("Insira um numero inteiro que seja positivo: ");
    scanf("%d", &a);

    ( a > 4294967295 ) ? printf("%lu e maior que um int.", a):
        printf("%lu pertence ao intervalo do int.", a);



    
    return 0;
}