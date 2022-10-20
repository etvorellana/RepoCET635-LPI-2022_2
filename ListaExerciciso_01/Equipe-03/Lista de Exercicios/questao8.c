#include <stdio.h>
#include<math.h>

int main(void) {
  float a, y, x, z;
  printf("f(x) = 5*x + 2\n\n");
  printf("x = ");
  scanf("%f", & x);
  printf(" y= ");
  scanf("%f", & y);
  a = 5 * x + 2;

  printf("resultado e=%f\n", a);
  /*substitui o "f(x)" por "a" pois não estava dando certo
   */
  a == y ? printf("esta na curva\n") : printf("nao esta na curva\n");
  a > y ? printf("esta a direita da curva\n") : printf("nao esta a direita da curva\n");
  a < y ? printf("esta a esquerda da curva\n") : printf("nao esta a esquerda da curva\n");
  z = sqrt(x * x + y * y);
  printf("a distância e %f\n", z);
  z = x * y;
  printf("resultado e %e\n", z);

  return 0;
}