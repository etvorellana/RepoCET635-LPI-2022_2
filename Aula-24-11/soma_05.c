#include <stdio.h>

int main(void)
{
    int n, soma;
    printf("Soma\n");
    printf("Entre com um valor inteiro positivo: ");
    scanf("%d", &n);
    while(n <= 0)
    {
        printf("O valor tem que ser maior que zero: ");
        scanf("%d", &n);
    }

    //1*1*1 + 2*2*2 + 3*3*3 + ... + n*n*n
    soma = 0;
    for(int i = 1; i <= n; i++)
    {
        //soma += i*i*i;
        if(i % 2 == 0)
            soma += i;
    }

    soma = 0;
    int i = 1;
    while(i <= n)
    {
        if(i % 2 == 0)
            soma += i;
        i++;
    }

    soma = 0;
    int i = 1;
    do
    {
        if(i % 2 == 0)
            soma += i;
        i++;
    }while(i <= n);

    printf("a soma é %d\n");