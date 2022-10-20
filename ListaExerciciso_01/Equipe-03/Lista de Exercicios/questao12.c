#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c, delta, x1, x2;

  printf("Digite o valor de a: ");
  scanf("%f", &a);

  printf("Digite o valor de b: ");
  scanf("%f", &b);

  printf("Digite o valor de c: ");
  scanf("%f", &c);

  // Polinômio de segundo grau: p(x) = ax² + bx + c
  printf("\np(x) = %.1fx² + %.1fx + %.1f\n", a, b, c);
  
  // Δ = b² - 4ac
  delta = (b * b) - (4 * a * c);
  printf("\nΔ = %.1f² - 4 × %.1f × %.1f\n", b, a, c);
  printf("Δ = %.1f\n\n", delta);
  
  delta < 0
    ? printf("O polinômio não possui raízes reais.\n")
    : delta == 0
      ? printf("O polinômio possui apenas uma raiz real.\n")
      : printf("O polinômio possui duas raízes reais.\n");
  
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);
  
  delta > 0
    ? printf("x₁ = %.2f \t x₂ = %.2f\n", x1, x2)
    : delta == 0
      ? printf("x = %.2f\n", x1) : 0;

  return 0;
}