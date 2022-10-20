#include <stdio.h>

int main(void) {
  int cha;

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &cha);
  cha < 0 ? printf("%d\n", -cha) : ' ';
  cha > 127 ? cha = 126 % 127 : ' ';
  cha >= 0 && cha <= 255 ? printf("Está na tabela ascii\n") : ' ';

  cha < 32 ? cha = 32 : ' ';
  printf("%d, %o, %x, %c", cha, cha, cha, cha);

  return 0;
}