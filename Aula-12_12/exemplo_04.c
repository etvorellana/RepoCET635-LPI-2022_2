#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char dataStr[50];
    printf("Entre com a data no formato dd/mm/aaaa: ");
    fgets(dataStr, 15, stdin);
    printf("%s\n", dataStr);
    // imprima o dia, o mes e o ano da data que foi fornecida
    // ...
    printf("Dia: %c", );
    printf("Mes: %c", );
    printf("Ano: %c", );
    return 0;
}