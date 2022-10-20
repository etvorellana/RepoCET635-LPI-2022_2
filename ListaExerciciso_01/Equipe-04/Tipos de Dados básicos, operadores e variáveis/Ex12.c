#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, x, funcpol, funcroot, condroot;
    int qntdroot;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    fflush(stdin);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    funcpol = ((a * x) * (a * x)) + (b * x) + c;

    funcroot = sqrt(funcpol);

    printf("\nA raíz ou as raízes do polinômio: %f e %f\n", x, funcroot);
    condroot = (funcroot > 0)? printf("\nO polinômio tem duas raízes.\n"): printf("\nO polinômio tem uma raíz.\n");

    return 0;
}
