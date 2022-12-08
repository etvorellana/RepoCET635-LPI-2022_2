#include <stdio.h>

// cabeçalhos de funções 
int leituraDeValor(void);

/*
    Esta versão do código compila e declara apenas o
    cabeçalho da função leituraDeValor() antes da
    função main(). Outros cabeçalhos de funções podem
    ser incluídos casso seja necessário.    
    Compile e teste esta versão.
*/

int main(void)
{
    // Lendo um valor do teclado
    int num = leituraDeValor();
    printf("O valor fornecido é %d\n", num);
    return 0;
}

/*
    A função leitura de valor permite a leitura de um valor
    inteiro entre 0 e 12. Enquanto o valor fornecido não 
    esteja no intervalo apropriado uma mensagem de erro 
    é fornecida e o valor é solicitado novamente
*/
int leituraDeValor(void)
{
    int val;
    int limInfLocal = 0;
    int limSupLocal = 12;
    do{
        printf("Entre um valor inteiro entre %d e %d \n", limInfLocal, limSupLocal);
        printf("x (%d <= x <= %d): ", limInfLocal, limSupLocal);
        scanf("%d", &val);
        if(val < limInfLocal || val > limSupLocal)
            printf("Valor fora do intervalo!!!\n");\
        else    
            break;
    }while(1);
    return val;
}


/*
Testando o funcionamento
./"introFun_03" 
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