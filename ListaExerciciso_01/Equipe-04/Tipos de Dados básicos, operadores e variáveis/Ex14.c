#include <stdio.h>

int main(void) {
  float x;
  float y;
  printf("Insira as coordenadas: \n");
  printf("Coordenada X: ");
  scanf("%f", &x);
  printf("\nCoordenada Y: ");
  scanf("%f", &y);

  (x * x) + (y * y) > 1 ? printf("Não está dentro da circunferência")
                        : printf("Está dentro da circunferência");

  return 0;
}