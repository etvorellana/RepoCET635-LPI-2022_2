#include <stdio.h>
#include <limits.h>


int main(void)
{
    printf("Caractere A = %c\n", 'A');
    printf("Caractere A = %d\n", 'A');
    printf("Caractere ( = %d\n", '(');
    printf("Caractere B = %c\n", 'A' + 1);

    printf("The number of bits in a byte %d\n", CHAR_BIT);

    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

    char ch1, ch2, ch3;
    ch1 = ch2 = ch3 = '\0';  
    char ch4 = 'a', ch5 = 'b', ch6;
    ch1 = 100;
    printf("ch1 = %c - %d\n", ch1, ch1);
    ch2 = ch1 + 1;
    printf("ch2 = %c - %d\n", ch2, ch2);
    ch3 = ch2 - 1;
    ch6 = ch5 + 7;
    printf("ch6 = %c - %d\n", ch6, ch6);
    printf("ch3 = %c - %d\n", ch3, ch3);
    
    ch3 = (ch1 > ch2) ? ch1:ch2;
    (ch1 > ch2) ? printf("ch1 = %c - %d\n", ch1, ch1):printf("ch2 = %c - %d\n", ch2, ch2);
    return 0;
}