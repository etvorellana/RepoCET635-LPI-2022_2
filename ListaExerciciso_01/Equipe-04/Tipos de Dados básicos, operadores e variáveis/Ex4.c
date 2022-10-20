#include <limits.h>
#include <stdio.h>

int main(void) {
  long num;
  printf("Forneça um número inteiro longo: ");
  scanf("%lu", &num);
  num > INT_MAX ? printf("%lu É maior que um int\n", num)
                : printf("%lu Esse valor pertence ao intervalo dos int\n", num);

  return 0;
}