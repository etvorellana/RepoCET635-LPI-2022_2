#include <stdio.h>

int main(void)
{
    int a, c;
    unsigned long int b, p10 = 1;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &a);
    c = a >= 0 ? a: -a;
    b = 0;
    while(c != 0)
    {
        b += p10 * (c % 2);
        c /= 2;
        p10 *= 10;
    }
    if (a >= 0)
        printf("%lu\n", b);
    else
        printf("-%lu\n", b);

    unsigned long int d = b;
    int p2 = 1;
    while(d != 0)
    {
        c += p2 * (d % 10);
        d /= 10;
        p2*= 2;
    }

    c = a < 0 ? -c:c;
    printf("%d\n", c);

    return 0;
}