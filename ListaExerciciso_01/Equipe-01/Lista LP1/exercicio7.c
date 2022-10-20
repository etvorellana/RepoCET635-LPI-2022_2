#include <stdio.h>

/*
7) Escreva um programa que leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros 
de zero até o número fornecido. A soma dos números inteiros de 1 até n se calcula como n(n+1)2. 
Imprima um resultado na tela. Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? 
*/

int main(void){
    int num, soma, soma2;
    printf("Digite um valor positivo ou negativo: ");
    scanf("%d", &num);
    soma = (num * (num+1))/2;
    soma2 = (num * (num-1))/2;
    num > 0 ? printf("A soma de todos os números inteiros de zero até %d é igual a %d\n", num, soma):printf("A soma de todos os números inteiros de zero até %d é igual a -%d\n", num, soma2);
    return 0;
}