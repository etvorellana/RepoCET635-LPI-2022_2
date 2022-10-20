#include <stdio.h>


int main(){

    float x, y, z;
    char op;
    printf("Entre com um número x = ");
    scanf("%f", &x);
    printf("Escolha uma operação (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Entre com outro número y = ");
    scanf("%f", &y);
    
    if(op == '+'){
        z = x + y;
        printf("%.2f + %.2f = %.2f\n", x, y, z);
    }else if(op == '-'){
        z = x - y;
        printf("%.2f - %.2f = %.2f\n", x, y, z);
    }else if(op == '*'){
        z = x * y;
        printf("%.2f * %.2f = %.2f\n", x, y, z);
    }else if(op == '/' && y != 0){
        z = x / y;
        printf("%.2f / %.2f = %.2f\n", x, y, z);
    }else if(op == '/' && y == 0)
        printf("Divisão por zero indefinida !!!!!\n");
    else
        printf("Operador não é valido!!!!!\n");
    return 0;
}