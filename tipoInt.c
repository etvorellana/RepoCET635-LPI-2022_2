#include <stdio.h>
#include <limits.h>


int main(void)
{
    printf("Valor int: %d\n", 1234);
    printf("Valor int: %d\n", 01234);
    printf("Valor int: %d\n", 0x1234);
    printf("Valor int: %o\n", 1234);
    printf("Valor int: %o\n", 01234);
    printf("Valor int: %o\n", 0x1234);
    printf("Valor int: %x\n", 1234);
    printf("Valor int: %X\n", 01234);
    printf("Valor int: %x\n", 0x1234);

    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);

    printf("The maximum value of UINT = %ud\n", UINT_MAX);

    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);

    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);

    printf("The maximum value of ULONG = %lu\n", ULONG_MAX);

    int cont, soma, total;
    unsigned int i = 314;
    printf("i = %u\n", i);
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    cont = soma = total = 0;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);

    cont = i + 1;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    soma = 2 * cont;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    total = soma + cont;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    i = total / 2;
    printf("i = %u\n", i);
    total = total % 2;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);

    cont = 1; 
    soma = 0;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    soma = cont + 1;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    cont = 1;
    soma = 0;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    soma = cont++;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    cont = 1;
    soma = 0;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);
    soma = ++cont;
    printf("soma = %d, cont = %d, total = %d\n", soma, cont, total);


    return 0;
}