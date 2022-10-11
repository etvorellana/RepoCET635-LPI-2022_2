#include <stdio.h>
/*
    Escreva um programa que peça ao usuário para fornecer dois 
    números inteiros, obtenha-os da entrada padrão, usando 
    scanf, e imprima o maior deles seguido das palavras 
    “e maior”. Se os números foram iguais, imprima a mensagem 
    “estes números são iguais”. Use apenas o operador 
    condicional (?).
*/
int main(void)
{
    int a, b; // declarando as variáveis
    printf("Entre com dois valores inteiros: \n");
    printf("a -> ");
    scanf("%d", &a);
    printf("b -> ");
    scanf("%d", &b);
    printf("Os valores fornecidos são: %d e %d\n", a, b);
    // uma solução diferente a vista em sala de aula
    int opc = (a == b) ? 0 : (a > b) ? 1 : -1;
    (!opc) ? printf("a = %d, b = %d Estes números são iguais\n", a, b):
        (!(opc + 1)) ?  printf("b = %d é maior\n", b):
            printf("a = %d é maior\n", a);
    // Você entende por que esta implementação funciona?
    // A solução vista em sala de aula
    (a == b) ? printf("a = %d, b = %d Estes números são iguais\n", a, b):
        (a > b) ? printf("a = %d é maior\n", a) : printf("b = %d é maior\n", b);
    return 0;
}