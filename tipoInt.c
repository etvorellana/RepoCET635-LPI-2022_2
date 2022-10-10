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


    return 0;
}