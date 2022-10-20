#include <stdio.h>

/*
6) Escreva um programa que leia um número inteiro utilizando o operador % 
converta ele num valor entre 1 e 6. Imprima o resultado na tela;
*/

int main(void){
    int a, conversao;

    printf("Digite um número: ");
    scanf("%d", &a);

    conversao = (a % 6) + 1;
    printf("%d\n", conversao);
    return 0;
}