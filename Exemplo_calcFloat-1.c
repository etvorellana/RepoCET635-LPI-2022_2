#include <stdio.h>


int main(){

    float x, y, z;
    char op;
    printf("Entre com um valor inteiro x = ");
    scanf("%f", &x);
    printf("Escolha uma operação (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Entre com outro valor inteiro y = ");
    scanf("%f", &y);
    
    if(op == '+'){
        z = x + y;
        printf("%.2f + %.2f = %.2f\n", x, y, z);
    }
    if(op == '-'){
        z = x - y;
        printf("%.2f - %.2f = %.2f\n", x, y, z);
    }
    if(op == '*'){
        z = x * y;
        printf("%.2f * %.2f = %.2f\n", x, y, z);
    }
    if(op == '/' && y != 0){
        z = x / y;
        printf("%.2f / %.2f = %.2f\n", x, y, z);
    }
    if(op == '/' && y == 0){
        printf("Divisão por zero indefinida !!!!!\n");
    }

    if(op != '+' && op != '-' && op != '*' && op != '/' ){
        printf("Operador não é valido!!!!!\n");
    }

    return 0;
}