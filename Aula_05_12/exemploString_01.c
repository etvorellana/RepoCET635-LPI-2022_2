#include <stdio.h>

int main(void)
{
    char nome[100] = "Esbel Tomas Valero Orellana";
    //printf("Meu nome: %s\n", nome);
    puts(nome);
    printf("Qual o seu nome?: ");
    //scanf("%s", nome);
    //gets(nome);
    fgets(nome, 100, stdin);
    printf("Seu nome: %s\n", nome);

    return 0;
}