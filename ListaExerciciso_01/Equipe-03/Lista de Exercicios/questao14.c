#include <stdio.h>

int main(void) {
  float x, y, posicao;
  const float raio = 1.0;

  printf("Digite as coordenadas de um ponto da circunferência:\n");
  printf("X = ");
  scanf("%f", &x);
  printf("Y = ");
  scanf(" %f", &y);

  posicao = (x * x) + (y * y);
  printf((posicao <= raio) ? "O ponto está dentro da circunferência! :)\n"
                           : "O ponto está fora da circunferência! :(\n");
}