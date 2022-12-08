#include <stdio.h>

/*
    Esta versão do código não funciona. 
    Tente compilar assim como esta.
    Você sabe por que? 
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
