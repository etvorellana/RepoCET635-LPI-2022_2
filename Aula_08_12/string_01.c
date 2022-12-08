#include <stdio.h>

int main(void)
{
    char str1[] = "Isto é uma STRING!!!";
    char str2[100] = "Isto é outra STRING!!!";
    char *str3 = str1;
    char str4[100];
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("Entre com uma STRING: ");
    scanf("%s", str4);
    printf("A sua STRING é: %s\n", str4);
    return 0;
}