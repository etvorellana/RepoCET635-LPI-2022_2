#include <stdio.h>
#include <limits.h>

int main()
{
    printf("O número de bits em um byte %d\n", CHAR_BIT);
    
    printf("O valor mínimo de um SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("O valor máximo de um SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("O valor máximo de um UNSIGNED CHAR = %d\n", UCHAR_MAX);

    printf("O valor mínimo de um CHAR = %d\n", CHAR_MIN);
    printf("O valor máximo de um CHAR = %d\n", CHAR_MAX);

    printf("O valor mínimo de um SHORT INT = %d\n", SHRT_MIN);
    printf("O valor máximo de um SHORT INT = %d\n", SHRT_MAX);
    printf("O valor máximo de um UNSIGNED SHORT INT = %u\n", USHRT_MAX);

    printf("O valor mínimo de um INT = %d\n", INT_MIN);
    printf("O valor máximo de um INT = %d\n", INT_MAX);
    printf("O valor máximo de um UNSIGNED INT = %lu\n", UINT_MAX);

    printf("O valor mínimo de um LONG INT= %ld\n", LONG_MIN);
    printf("O valor máximo de um LONG INT= %ld\n", LONG_MAX);
    printf("O valor máximo de um UNSIGNED LONG INT= %lu\n", ULONG_MAX);

    printf("Declarando variáveis de tipo char.\n");
    char ch_1 = 'A', ch_2;
    ch_2 = 65;
    unsigned char ch_3 = 250;
    printf("ch_1 = %c, \nch_2 = %c, \nch_3 = %u \n", ch_1, ch_2, ch_3);

    printf("Declarando variáveis de tipo short int.\n");
    short int sh_1 = 24, sh_2;
    sh_2 = ch_3;
    unsigned short int sh_3 =60000;
    printf("sh_1 = %d, \nsh_2 = %i, \nsh_3 = %u \n", sh_1, sh_2, sh_3);
    
    printf("Declarando variáveis de tipo int.\n");
    int in_1 = -3456;
    int in_2 = sh_3;
    unsigned int in_3 = 4000000000;
    printf("in_1 = %d, \nin_2 = %i, \nin_3 = %u \n", in_1, in_2, in_3);
    
    printf("Declarando variáveis de tipo long int.\n");
    long int li_1 = -123456789;
    long int li_2 = in_3;
    unsigned long int li_3 = 10000000000000000000ul;
    printf("li_1 = %ld, \nli_2 = %li, \nli_3 = %lu \n", li_1, li_2, li_3);
    
    return(0);
}