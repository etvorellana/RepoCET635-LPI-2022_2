#include <stdio.h>

int main(void)
{
    char nome[100] = "Esbel Tomas Valero Orellana";
    char ch;
    int i = 0;
    while (nome[i] != '\0')
    {
        printf("%c", nome[i]);
        i++;
    }
    printf("\n");
    printf("O tamanho da string é: %d\n", i);
    return 0;
}