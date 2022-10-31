#include <stdio.h>

int main()
{
    float x, y, z;
    char op;
    printf("Entre com um valor inteiro x = ");
    scanf("%f", &x);
    printf("Escolha uma operação (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Entre com outro valor inteiro y = ");
    scanf("%f", &y);
    switch (op){
    case '+':
        z = x + y;
        printf("%.2f + %.2f = %.2f\n", x, y, z);
        break;
    case '-':
        z = x - y;
        printf("%.2f - %.2f = %.2f\n", x, y, z);
        break;
    case '*':
        z = x * y;
        printf("%.2f * %.2f = %.2f\n", x, y, z);
        break;
    case '/':
        if(y != 0){
            z = x / y;
            printf("%.2f / %.2f = %.2f\n", x, y, z);
        }else{
            printf("Divisão por zero indefinida !!!!!\n");
        }
        break;
    default:
        printf("Operador não é valido!!!!!\n");
    }
    
}