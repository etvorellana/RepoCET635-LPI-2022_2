#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Digite dois números inteiros: \n");
  printf("Valor A: ");
  scanf("%d", &a);
  printf("Valor B: ");
  scanf("%d", &b);

  c = a + b;
  printf("a + b em octal: %o\n", c);

  c = a * b;
  printf("a * b em hexadecimal: %x\n", c);

  c = a - b;
  c<0 ? printf("Diferença a e b: %d\n", -c) : printf("Diferença a e b: %d\n", c);
      

  c = a / b;
  b != 0 ? printf("Quociente entre a e b: %d", c)
         : printf("Não foi possível realizar a divisão\n");
  c = a % b == 0 ? printf("\nO resultado é uma divisão exata\n") : ' ';

  return 0;
}