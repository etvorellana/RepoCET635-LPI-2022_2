#include <stdio.h>

/*
Escreva um programa que peça ao usuário para fornecer um número inteiro longo, obtenha-o da entrada padrão, 
usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int. Imprima 
na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. 
Use apenas o operador condicional (?).
*/

int main(void){
  long int num;

  printf("Digite um número inteiro longo:  ");
  scanf("%li", &num);

  num <= 2147483647 ? printf("%li pertence ao intervalo dos int\n", num) : printf("%li é maior que um int\n", num);
  return 0;
}