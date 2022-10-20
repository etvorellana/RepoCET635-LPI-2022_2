#include <stdio.h>


int main(){
    int numDec;
    printf("Entre com um número positivo entre 0 e 255: ");
    scanf("%d",&numDec);
    //Para evitar erros
    numDec = (numDec < 0) ?  0 : numDec;
    numDec = (numDec > 255) ?  255 : numDec;
    //Precisamos de, 8 caracteres
    char dig0, dig1, dig2, dig3, dig4, dig5, dig6, dig7;
    int aux = numDec;
    dig0 = dig1 = dig2 = dig3 = dig4 = dig5 = dig6 = dig7 = '0';
    if (aux%2 == 1) dig0 = '1';
    aux /= 2;
    if (aux%2 == 1) dig1 = '1';
    aux /= 2;
    if (aux%2 == 1) dig2 = '1';
    aux /= 2;
    if (aux%2 == 1) dig3 = '1';
    aux /= 2;
    if (aux%2 == 1) dig4 = '1';
    aux /= 2;
    if (aux%2 == 1) dig5 = '1';
    aux /= 2;
    if (aux%2 == 1) dig6 = '1';
    aux /= 2;
    if (aux%2 == 1) dig7 = '1';
    printf("O número %d em binário é %c%c%c%c%c%c%c%c \n", 
        numDec, dig7, dig6, dig5, dig4, dig3, dig2, dig1, dig0);  

    return 0;
}