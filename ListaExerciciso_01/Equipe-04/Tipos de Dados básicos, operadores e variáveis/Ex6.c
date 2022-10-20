#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;
  int ran;
  printf("Digite um número: ");
  scanf("%d", &num);
  num = num % num + rand() % 6;
  printf("%d", num);
















  return 0;
}