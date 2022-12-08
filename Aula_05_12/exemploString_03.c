#include <stdio.h>

int main(void)
{
    char ch;
    char nome[100];
    int i = 0;
    do
    {
        ch = getchar();
        nome[i] = ch;
        i++;
    }while (ch != '\n');
    nome[i-1] = '\0';
    puts(nome); // Pq nome não é uma string
    return 0;
}