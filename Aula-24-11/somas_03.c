#include <stdio.h>


int somaF(int n, int tipo);
int somaQuad(int n);

int main(void)
{
    int n, soma;
    printf("Soma dos quadrados\n");
    printf("Entre com um valor inteiro positivo: ");
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("O valor tem que ser maior que zero: ");
        scanf("%d", &n);
    }
    soma = somaQuad(n);
    /*
    int i = 1;
    while(i <= n)
    {
        soma += i*i;
        i++;
    }
    */
    printf("A soma dos quadrados é: %d\n", soma);
    //soma = (n*(n+1)*(2*n+1))/6;
    soma = somaF(n, 2);
    printf("A soma dos quadrados é: %d\n", soma);
    return 0;
}

int somaQuad(int n)
{
    int soma = 0;
    for(int i = 1; i <= n; i++)
    {
        soma += i*i;
    }
    return soma;
}

int somaF(int n, int tipo)
/*
    quanto tipo == 1 retorna a soma 1+2+...+n
    quando tipo == 2 retorna a soma 1ˆ2 + 2^2 + ... + n^2
    quando tipo == 3 retorna a soma 1^3 + 2^3 + ... _ n^3 
*/
{
    int soma = 0;
    switch (tipo)
    {
    case 1:
        // 1+2+...+n
        soma = n*(n+1)/2;
        break;
    case 2:
        //1ˆ2 + 2^2 + ... + n^2
        soma = n*(n+1)*(2*n+1)/6;
        break;
    case 3:
        //1^3 + 2^3 + ... _ n^3 
        soma = (n*(n+1)/2);
        soma *= soma; 
        break;
    default:
        printf("Tipo errado!!!!!!\n");
        break;
    }
    return soma;
}
