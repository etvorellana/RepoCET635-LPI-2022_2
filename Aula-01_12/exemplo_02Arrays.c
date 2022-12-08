#include <stdio.h>

int main(void)
{
    int c[10] = {1, 2, 4, 0, 5};
    printf("O endereço do array: %p\n", c);
    printf("O endereço do array: %p\n", &c[0]);
    printf("A informaçao em 0 é : %d\n", c[5]);

    return 0;
}