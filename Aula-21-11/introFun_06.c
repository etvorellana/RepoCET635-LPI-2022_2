#include <stdio.h>
#include <limits.h>


/*
    Esta versão do código define os limites do intervalo
    com ajuda dos parâmetros de entrada da função. Mais uma
    vez vamos demonstrar como funciona o escopo das variáveis
    de acordo com o bloco sintáctico onde são declaradas.
    Compile e teste esta versão.
*/

// cabeçalhos de funções 
int leituraDeValor(int limInfPar, int limSupPar);

// variáveis globais
int limInf = INT_MIN, limSup = INT_MAX; // <------ 
short int const true = 1;
short int const false = 0;

int main(void)
{
    printf("Limites globais: %d - %d\n", limInf, limSup);
    // definindo limites nas variáveis locais
    int limInfLocal = 0;
    int limSupLocal = 12;
    printf("Limites locais: %d - %d\n", limInfLocal, limSupLocal);
    // mudando os limites globais
    limInf = -5;
    limSup = 5;
    // Lendo um valor do teclado
    // Podemos chamar a função passando os valores 
    // de variáveis locais ...
    int num = leituraDeValor(limInfLocal, limSupLocal);
    printf("O valor fornecido é %d\n", num);
    // ... ou valores globais ...
    num = leituraDeValor(limInf, limSup);
    printf("O valor fornecido é %d\n", num);
    // A passagem é feita "por valor" ...
    return 0;
}

/*
    A função leitura de valor permite a leitura de um valor
    inteiro no intervalo definido pelas variáveis globais
    limInfGlobal e limSupGlobal. Enquanto o valor fornecido não 
    esteja no intervalo apropriado uma mensagem de erro 
    é fornecida e o valor é solicitado novamente
*/
int leituraDeValor(int limInfPar, int limSupPar)
{
    int val;
    // ... o valor passado é copiado para a variável declarada
    // como parâmetro da função 
    printf("Limites definidos nas variáveis globais: %d - %d\n", limInf, limSup);
    //Por que a linha a seguir não compila?
    //printf("Limites definidos nas variáveis globais: %d - %d\n", limInfLocal, limSupLocal); 
    printf("Limites definidos nos parâmetros: %d - %d\n", limInfPar, limSupPar); 
    do{
        printf("Entre um valor inteiro entre %d e %d \n", limInfPar, limSupPar);
        printf("x (%d <= x <= %d): ", limInfPar, limSupPar);
        scanf("%d", &val);
        if(val < limInfPar || val > limSupPar)
            printf("Valor fora do intervalo!!!\n");\
        else    
            break;
    }while(true); // usando aqui outra variável global
    return val;
}


/*
Testando o funcionamento
./"introFun_06" 
Limites globais: -2147483648 - 2147483647
Limites locais: 0 - 12
Limites definidos nas variáveis globais: -5 - 5
Limites definidos nos parâmetros: 0 - 12
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): -1
Valor fora do intervalo!!!
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): 13 
Valor fora do intervalo!!!
Entre um valor inteiro entre 0 e 12 
x (0 <= x <= 12): 4
O valor fornecido é 4
Limites definidos nas variáveis globais: -5 - 5
Limites definidos nos parâmetros: -5 - 5
Entre um valor inteiro entre -5 e 5 
x (-5 <= x <= 5): 5
O valor fornecido é 5
*/