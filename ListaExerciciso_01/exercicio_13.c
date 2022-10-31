#include <stdio.h>
int main(void){
    float n1, n2, n3, media, notaF, notaPF;
    int i = 0;
    printf("Desempenho na disciplina\n");
    printf("Nota no crédito %d: ", ++i);
    scanf("%f", &n1);
    printf("Nota no crédito %d: ", ++i);
    scanf("%f", &n2);
    printf("Nota no crédito %d: ", ++i);
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/i;
    notaF = media >= 7.0 ? media : 0;
    media >= 7.0 ? printf("Não precisa Prova Final\n"):
                    printf("Nota na Prova Final: ");
    media >= 7.0 ? printf("_________________________\n") : 
                    scanf("%f", &notaPF);
    notaF = media >= 7.0 ? media : (media*4 + notaPF*6)/10; 
    printf("Nota final na disciplina: %.2f\n", notaF);
    return 0;
}