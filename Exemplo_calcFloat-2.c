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

    if (op == '+')
    {
        z = x + y;
        printf("%.2f + %.2f = %.2f\n", x, y, z);
    }
    else if (op == '-')
    {
        z = x - y;
        printf("%.2f - %.2f = %.2f\n", x, y, z);
    }
    else if (op == '*')
    {
        z = x * y;
        printf("%.2f * %.2f = %.2f\n", x, y, z);
    } else if(op == '/'){
        if(y != 0){
            z = x / y;
            printf("%.2f / %.2f = %.2f\n", x, y, z);
        }else{
            printf("Divisão por zero indefinida !!!!!\n");
        }
    }else
        printf("Operador não é valido!!!!!\n");
    
    return 0;
}