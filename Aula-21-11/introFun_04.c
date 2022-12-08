#include <stdio.h>
#include <limits.h>


/*
    Esta versão do código define os limites do intervalo
    com ajuda de variáveis globais. Veja como funciona o 
    das variáveis de acordo com o bloco sintáctico onde 
    são declaradas.
    Compile e teste esta versão.
*/

// cabeçalhos de funções 
int leituraDeValor(void);

// variáveis globais
int limInfGlobal = INT_MIN, limSupGlobal = INT_MAX;
short int const true = 1;
short int const false = 0;

int main(void)
{
    // As variáveis globais existem dentro de qualquer função
    printf("Limites iniciais: %d - %d\n", limInfGlobal, limSupGlobal); 
    // definindo limites nas variáveis globais
    limInfGlobal = 0;
    limSupGlobal = 12;
    // Lendo um valor do teclado
    int num = leituraDeValor();
    printf("O valor fornecido é %d\n", num);
    return 0;
}

/*
    A função leitura de valor permite a leitura de um valor
    inteiro no intervalo definido pelas variáveis globais
    limInfGlobal e limSupGlobal. Enquanto o valor fornecido não 
    esteja no intervalo apropriado uma mensagem de erro 
    é fornecida e o valor é solicitado novamente
*/
int leituraDeValor(void)
{
    int val;
    // As variáveis globais existem dentro de qualquer função
    printf("Limites redefinidos na função main(): %d - %d\n", limInfGlobal, limSupGlobal); 
    do{
        printf("Entre um valor inteiro entre %d e %d \n", limInfGlobal, limSupGlobal);
        printf("x (%d <= x <= %d): ", limInfGlobal, limSupGlobal);
        scanf("%d", &val);
        if(val < limInfGlobal || val > limSupGlobal)
            printf("Valor fora do intervalo!!!\n");\
        else    
            break;
    }while(true); // usando aqui outra variável global
    return val;
}


/*
Testando o funcionamento
./"introFun_04" 
Limites iniciais: -2147483648 - 2147483647
Limites redefinidos na função main(): 0 - 12
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