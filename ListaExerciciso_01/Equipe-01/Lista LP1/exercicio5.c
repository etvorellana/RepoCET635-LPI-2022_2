#include <stdio.h>

/*
Escreva um programa que peça ao usuário para fornecer um número inteiro sem sinal, 
obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, 
sem perda de informação como um int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” o
u “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).
*/

int main(void){
  unsigned long int num;

  printf("Digite um número inteiro longo:  ");
  scanf("%lu", &num);

  num <= 4294967295 ? printf("%lu pertence ao intervalo dos int\n", num) : printf("%lu é maior que um int\n", num);
  return 0;
}