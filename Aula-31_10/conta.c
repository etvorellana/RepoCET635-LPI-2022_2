#include <stdio.h>

int main(void)
{
    // declarando os preços dos produtos como constante. 
    const float cervejaA = 10, cervejaB = 11.5, cervejaC = 15;
    const float refriA = 6.5, refriB = 8.0, refriC = 9.5;
    const float petiscoA = 18.9, petiscoB = 24.3, petiscoC = 29;
    // controle da repetição
    char resp = 's'; // inicializando para poder usar com o while
    // seleção de opção de item consumido
    int op; // não precisa inicializar
    // Quantidade de itens
    int quant; // Não precisa inicializar
    // Valor da conta
    float valor = 0; // Inicialmente nada foi consumido

    printf("Vamos calcular o valor da conta.\n");
    // a condição é verdadeira da primeira vez
    while(resp == 's' ||  resp == 'S')
    {
        printf("Qual item foi consumido?\n");
        printf("(1) - Cerveja\n(2) - Refrigerante\n(3) - Petisco\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Qual cerveja foi consumida?\n");
            printf("(1) - Cerveja A R$(%.2f)\n", cervejaA);
            printf("(2) - Cerveja B R$(%.2f)\n", cervejaB);
            printf("(3) - Cerveja C R$(%.2f)\n", cervejaC);
            printf("Quantas cervejas? ");
            scanf("%d", &quant);
            switch (quant)
            {
            case 1:
                valor += quant*cervejaA;
                break;
            case 2:
                valor += quant*cervejaB;
                break;
            case 3:
                valor += quant*cervejaC;
                break;
            default:
                printf("Opção inválida!!!!\n");
                break;
            }
            break;
        case 2:
            printf("Qual refrigerante foi consumido?\n");
            printf("(1) - Refrigerante A R$(%.2f)\n", refriA);
            printf("(2) - Refrigerante B R$(%.2f)\n", refriB);
            printf("(3) - Refrigerante C R$(%.2f)\n", refriC);
            printf("Quantos refrigerantes? ");
            scanf("%d", &quant);
            switch (quant)
            {
            case 1:
                valor += quant*refriA;
                break;
            case 2:
                valor += quant*refriB;
                break;
            case 3:
                valor += quant*refriC;
                break;
            default:
                printf("Opção inválida!!!!\n");
                break;
            }
            break;
        case 3:
            printf("Qual petisco foi consumido?\n");
            printf("(1) - Petisco A R$(%.2f)\n", petiscoA);
            printf("(2) - Petisco B R$(%.2f)\n", petiscoB);
            printf("(3) - Petisco C R$(%.2f)\n", petiscoC);
            printf("Quantos petiscos? ");
            scanf("%d", &quant);
            switch (quant)
            {
            case 1:
                valor += quant*petiscoA;
                break;
            case 2:
                valor += quant*petiscoB;
                break;
            case 3:
                valor += quant*petiscoC;
                break;
            default:
                printf("Opção inválida!!!!\n");
                break;
            }
            break;
        
        default:
            printf("Opção inválida!!!!\n");
            break;
        }

        printf("Foram consumidos outros itens (digite \'s\' para continuar): ");
        scanf(" %c", &resp); // atualizando a variável que controla o while
    }

    printf("Quantos clientes vão dividir a conta?\n");
    scanf("%d", &quant); // reutilizando a variável quant;
    printf("A valor da conta: R$%.2f\n", valor);
    if(quant > 0)
        printf("Da R$%.2f\n para cada\n", valor/quant);
    return 0;
}