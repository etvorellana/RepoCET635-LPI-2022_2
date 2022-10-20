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
    if(op == '+'){
        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
    }else if(op == '-'){
        c = a - b;
        printf("%d - %d = %d\n", a, b, c);
    }else if(op == '*'){
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
    }else if (b == 0){
        printf("Operação não é possível\n");
    }else if(op == '/'){
        c = a / b;
        printf("%d / %d = %d\n", a, b, c);
    }else if(op == '%'){
        c = a % b;
        printf("%d %% %d = %d\n", a, b, c);
    }else{
        printf("Operador não é valido!!!!\n");
    }

    return 0;
}