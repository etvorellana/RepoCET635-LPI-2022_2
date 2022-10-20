#include <stdio.h>
#include <stdlib.h>

int main(void){

    float cre1, cre2, cre3, cre4, cre5, media;
   
    printf("Insira a nota do credito 1: ");
    scanf("%f", &cre1);
    
    printf("Insira a nota do credito 2: ");
    scanf("%f", &cre2);
   
    printf("Insira a nota do credito 3: ");
    scanf("%f", &cre3);
   
    printf("Insira a nota do credito 4: ");
    scanf("%f", &cre4);
   
    printf("Insira a nota do credito 5: ");
    scanf("%f", &cre5);

    media = (cre1 + cre2 + cre3 + cre4 + cre5) / 5;

    printf("Sua media é de: %0.2f \n", media);

    float ef, mf;

    ( media >= 7 ) ? printf("Voce passou!!!") : 
        printf("Voce nao passou. Insira sua nota da prova final: ");
    
    scanf("%f", &ef); 

    mf =  ( ( media * 6 ) + ( ef * 4 ) ) / 10;
    
    printf("Sua media final e: %0.2f \n", mf);
    
    ( mf < 5 ) ? printf("Voce foi reprovado -_-") :
         printf("Parabens, voce passou!!!'(' por pouco...')'");

    return 0;
}