#include <stdio.h>

int main(void) {
  printf("Curso: \"CET635 \t\t\t\t Linguagem\" de \\ %% Programação!!!");
  printf(" Turma 2022.2\n");
  int a, b, c;
  printf("Entre com o valor de a: ");
  scanf("%d", &a);
  printf("Entre com o valor de b: ");
  scanf("%d", &b);
  c = a + b;
  printf("A soma de %d mais %d é %d\n", a, b, c);
  return 0;
}

