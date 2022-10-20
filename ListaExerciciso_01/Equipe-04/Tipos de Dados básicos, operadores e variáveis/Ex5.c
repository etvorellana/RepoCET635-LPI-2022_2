#include <limits.h>
#include <stdio.h>

int main(void) {
  unsigned long num;
  printf("Forneça um número inteiro sem sinal: ");
  scanf("%lu", &num);
  num > INT_MAX ? printf("%lu É maior que um int\n", num)
                : printf("%lu Esse valor pertence ao intervalo dos int\n", num);
  num < 0 ? printf("Apenas número sem sinal"): ' ';

  return 0;
}