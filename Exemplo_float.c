#include <stdio.h>
#include <float.h>

int main()
{
    printf("O valor máximo de um float = %.10e\n", FLT_MAX);
    printf("O valor mínimo de um float = %.10e\n", FLT_MIN);

    printf("O tamanho (em bytes) de um float = %d\n", sizeof(float));
    printf("O número de casas decimais = %d\n", FLT_MANT_DIG);
    
    printf("O valor máximo de um double = %.10e\nL", DBL_MAX);
    printf("O valor mínimo de um double = %.10e\nL", DBL_MIN);

    printf("O tamanho (em bytes) de um double = %d\n", sizeof(double));
    printf("O número de casas decimais = %d\n", DBL_MANT_DIG);

    printf("O valor máximo de um long double = %.10eL\n", LDBL_MAX);
    printf("O valor mínimo de um double long double = %.10eL\n", LDBL_MIN);

    printf("O tamanho (em bytes) de um long double = %d\n", sizeof(long double));
    printf("O número de casas decimais = %d\n", LDBL_MANT_DIG);

    printf("Os valores literais de ponto flutuante são represetados\n");
    printf("como variáveis de precisão dupla (double).\n");
    printf("Tamanho (em bytes) do literal 1.0 é: %d\n", sizeof(1.0));
    printf("Para representar o valor como um ponto flutuante de\n");
    printf("precisão simples (float) é necessário adicionar \n");
    printf("um f no final do número.\n");
    printf("Tamanho (em bytes) do literal 1.0f é: %d\n", sizeof(1.0f));
    
    printf("Declarando variáveis de tipo float\n");
    float fl_1, fl_2 = 3.1415f;
    fl_1 = 1.3456E-15f;
    printf("fl_1 = %.4e, fl_2 = %.4f\n", fl_1, fl_2);

    printf("Declarando variáveis de tipo double\n");
    double dl_1, dl_2 = fl_1;
    dl_1 = 1.3456E-25f;
    printf("dl_1 = %.4e, dl_2 = %.20f\n", dl_1, dl_2);

    return 0;


}