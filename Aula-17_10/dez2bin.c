#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &a);
    c = a;
    b = 0;
    b = 1*(c % 2) + b;
    c = c / 2;
    b = 10*(c % 2) + b;
    c = c / 2;
    b = 100*(c % 2) + b;
    c = c / 2;
    b = 1000*(c % 2) + b;
    c = c / 2;
    b = 10000*(c % 2) + b;
    c = c / 2;
    b = 100000*(c % 2) + b;
    c = c / 2;
    b = 1000000*(c % 2) + b;
    printf("%d\n", b);
    return 0;
}