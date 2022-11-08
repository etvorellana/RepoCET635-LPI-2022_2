#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    float consumo;
    float maiorConsumo = 0, menorConsumo=100000;
    float maiorAumento = 0;
    int mesMaiorConsumo, mesMenorConsumo, mesMaiorAumento = 0;
    float consumoAnterior;

    printf("Consumo anual de energia!!!!!\n");
    int i;
    for(i = 1; i <= 12; i++)
    {
        consumo = rand();
        consumo = 150 + (consumo/RAND_MAX)*350; 
        printf("Gerando o consumo do mes %d\n - %.2f\n", i, consumo);
        if(maiorConsumo < consumo)
        {
            maiorConsumo = consumo;
            mesMaiorConsumo = i;
        }
        if(menorConsumo > consumo)
        {
            menorConsumo = consumo;
            mesMenorConsumo = i;
        }
        if(i > 1){
            if (consumo - consumoAnterior > maiorAumento)
            {
                maiorAumento = consumo - consumoAnterior;
                mesMaiorAumento = i;
            }
        }
        consumoAnterior = consumo;
    }
    // Saída
    printf("O mes %d foi o de maior consumo com %.2f\n", mesMaiorConsumo, maiorConsumo);
    printf("O mes %d foi o de menor consumo com %.2f\n", mesMenorConsumo, menorConsumo);
    if(mesMaiorAumento)
        printf("O mes de maior aumento no consumo foi %d\n", mesMaiorAumento);
    else
        printf("Não teve aumento no consumo\n");
    return 0;
}