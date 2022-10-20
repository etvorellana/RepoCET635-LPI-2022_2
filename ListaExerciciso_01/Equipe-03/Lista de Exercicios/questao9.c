#include <stdio.h>
#include <math.h>

int main(void)
{
  float lado, diagonal, perimetro, area;
    
  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);
  
  diagonal = sqrt(2 * (lado * lado));
  perimetro = lado * 4;
  area = lado * lado;
  
  printf("Diagonal: %.2f \t Perimetro: %.2f \t Area: %.2f\n", diagonal, perimetro, area);

  return 0;
}