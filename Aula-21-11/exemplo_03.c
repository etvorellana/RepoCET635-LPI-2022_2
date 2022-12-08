#include <stdlib.h>
#include <stdio.h>
#include "exemplos.h"



int main()
{
    double a, b, c;
    double x, y;

    printf ("Entre com os parâmetros do polinômio\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("Entre com um valor de x: ");
    scanf("%lf", &x);
    y = p(a, b, c, x);
    printf("O valor d p(x) = ax^2 + bx + c é : %.2lf\n", y);
    return 0;
}

double p(double a, double b, double c, double x)
{
    double px;
    px = a*x*x + b*x + c;
    return px;
    // return a*x*x + b*x + c;
}