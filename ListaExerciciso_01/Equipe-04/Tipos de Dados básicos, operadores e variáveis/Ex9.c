#include <stdio.h>
#include <stdlib.h>

int main()
{
   float l, d, p, a;

    printf("digite o valor do lado do quadrado");
    scanf("%f", &l);

    d = l*sqrt(2);
    p = 4*l;
    a = l*l;
    printf("o valor da diagonal eh: %f", d);
    printf("o valor do perimetro eh: %f", p);
    printf("o valor da area eh: %f", a);

    return 0;
}
