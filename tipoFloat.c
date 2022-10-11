#include <stdio.h>
#include <float.h>


int main(void)
{
    printf("Valor de ponto flutuante: %f\n", 123.456);
    printf("Tamanho de um float: %d\n", sizeof(float));
    printf("Tamanho de um double: %d\n", sizeof(double));
    printf("Tamanho: %d\n", sizeof(123.456));
    printf("Tamanho: %d\n", sizeof(123.456f));
    printf("Tamanho: %d\n", sizeof((float)123.456));

    float x, y, z;
    double xd, yd, zd;
    long double xl, yl, zl;

    x = 1.2;
    printf("x = %.10f\n", x);
    y = 2.4f;
    printf("y = %.10f\n", y);
    z = x * y;
    printf("z = %.10f\n", z);
    z += 1.3;
    printf("z = %.10f\n", z);
    z /= 3;
    printf("z = %.10f\n", z);

    xd = 1.2;
    printf("xd = %.20f\n", xd);
    yd = 2.4;
    printf("yd = %.20f\n", yd);
    zd = xd * yd;
    printf("zd = %.20f\n", zd);
    zd += 1.3;
    printf("zd = %.20f\n", zd);
    zd /= 3;
    printf("zd = %.20f\n", zd);
    return 0;
}