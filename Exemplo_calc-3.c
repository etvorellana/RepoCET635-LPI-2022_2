#include <stdio.h>


int main(){

    int a, b, c;
    char op;
    printf("Entre com um valor inteiro a = ");
    scanf("%d", &a);
    printf("Entre com outro valor inteiro b = ");
    scanf("%d", &b);
    printf("Escolha uma operação (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        break;
    case '-':
        c = a - b;
        printf("%d - %d = %d\n", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
        break;
    case '/':
        if(b != 0){
            c = a / b;
            printf("%d / %d = %d\n", a, b, c);
        }else
            printf("Erro: Divisão por zero\n");
        break;
    case '%':
        if(b != 0){
            c = a % b;
            printf("%d %% %d = %d\n", a, b, c);
        }else
            printf("Erro: Divisão por zero\n");
        break;
    default:
        printf("Operador não é valido!!!!\n");    
    }

    return 0;
}