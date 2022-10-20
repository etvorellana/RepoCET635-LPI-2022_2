#include <stdio.h>
#include <math.h>

int main(void){
  float x, y, z, a, b;
  printf ("Digite dois números de ponto flutuante:\n");
  printf ("Primeiro número = ");
  scanf ("%f", &a);
  printf ("Segundo número = ");
  scanf ("%f", &b);
  x = 5 * a + 2;
  y = 5 * b + 2;
  printf ("x = 5 * %.2f + 2 = %.2f\n", a, x);
  if (x < 0){
    printf ("x está na esquerda\n");
  }else{
    printf ("x está na direita\n");
  }printf ("y = 5 * %.2f + 2 = %.2f\n", b, y);
  if (y < 0){
    printf ("y está na esquerda\n");
  }else{
    printf ("y está na direita\n");
  }z = sqrt(x * x + y * y);
  printf ("z = sqrt(%.2f * %.2f + %.2f * %.2f) = %.2f\n", x, x, y, y, z);
  z = x * y;
  printf ("z = %.2f * %.2f = %E", x, y, z);
}