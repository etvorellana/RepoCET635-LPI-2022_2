#include <stdio.h>

int main(){

long int a;

printf("digite um valor inteiro longo:");
scanf("%i",&a);
  ( a < 2147483647) ? printf("este valor pertence ao intervalo dos int") : printf("e maior que um int");


return 0;
}
