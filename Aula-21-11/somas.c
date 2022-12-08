#include <stdio.h>

int somaN(int n);
int somaNF(int n);

int main(void)
{
    int a, soma;
    printf("Entre com um valor inteiro positivo: ");
    do{
        scanf("%d", &a);
    }while(a <= 0);
    soma = somaN(a);
    printf("A soma de 1 até %d é : %d\n", a, soma);
    soma = somaNF(a);
    printf("A soma de 1 até %d é : %d\n", a, soma);
    return 0;
}

int somaN(int n)
{
    int soma = 0;
    for(int k = 1; k <= n; k++)
        soma += k;
    return soma;
}

int somaNF(int n)
{
    int soma;
    soma = n*(n+1)/2;
    return soma;
}