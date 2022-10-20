#include <stdio.h>


int main(){

    int a, b, c;
    char op;
    printf("Entre com um valor inteiro a = ");
    scanf("%d", &a);
    printf("Entre com outro valor inteiro b = ");
    scanf("%d", &b);
    printf("Escolha uma operação (+, -, *, /, /%): ");
    scanf(" %c", &op);
    if(op == '+'){
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
    }
    if(op == '-'){
        c = a - b;
        printf("%d - %d = %d\n", a, b, c);
    }
    if(op == '*'){
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
    }
    if(op == '/'){
        c = a / b;
        printf("%d / %d = %d\n", a, b, c);
    }
    if(op == '%'){
        c = a % b;
        printf("%d % %d = %d\n", a, b, c);
    }

    return 0;
}