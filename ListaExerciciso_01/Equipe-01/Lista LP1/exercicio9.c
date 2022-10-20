#include <stdlib.h>
#include <math.h>

/*
  9) Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima:
a- O tamanho da diagonal do mesmo; 
b- O valor do perímetro;
c- Sua área.
*/

int main(void) {
  float lado, diagonal, perimetro, area;
  printf("Entre com um valor para o lado do quadrado:\n");
  scanf("%f", &lado);
  diagonal = lado * sqrt(2); //letra A
  perimetro = 4 * lado; //letra B 
  area = lado * lado; //letra C
  printf("A diagonal equivale a %.2f√2 cm = %.2f cm.\n", lado, diagonal);
  printf("O perímetro equivale a %.2f cm.\n", perimetro);
  printf("A área equivale a %.2f cm.\n", area);
  return 0;
}