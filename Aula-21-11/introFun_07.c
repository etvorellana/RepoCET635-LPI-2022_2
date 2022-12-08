#include <stdio.h>
#include <limits.h>
#include "exemplos.h"

/*
    Esta versão do código define os limites do intervalo
    com ajuda dos parâmetros de entrada da função. Agora
    os cabeçalhos das funções e as variáveis globais são
    definidos em um arquivo de cabeçalhos.
*/

int main(void)
{
    // definindo limites nas variáveis locais
    int limInfLocal = 0;
    int limSupLocal = 12;
    // Lendo um valor do teclado
    int num = leituraDeValor(limInfLocal, limSupLocal);
    printf("O valor fornecido é %d\n", num);
    return 0;
}

int leituraDeValor(int limInfPar, int limSupPar)
{
    int val;
    do{
        printf("Entre um valor inteiro entre %d e %d \n", limInfPar, limSupPar);
        printf("x (%d <= x <= %d): ", limInfPar, limSupPar);
        scanf("%d", &val);
        if(val < limInfPar || val > limSupPar)
            printf("Valor fora do intervalo!!!\n");\
        else    
            break;
    }while(true);
    return val;
}

/*
Testando o funcionamento
./"introFun_07" 
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): -1
Valor fora do intervalo!!!
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): 13
Valor fora do intervalo!!!
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): 4
O valor fornecido é 4
*/