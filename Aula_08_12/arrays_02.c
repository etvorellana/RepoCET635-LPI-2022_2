#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int main(void)
{
    // definindo a semente do gerador de NA
    srand(time(NULL));
    // Declarando as variáveis do meu programa
    int vet1[N], *vet2; // vet2 como um ponteiro para um inteiro  
    int i, j;
    // Vamos inicializar vet1 com valores aleatórios entre 0 e 255
    for(i = 0; i < N; i++ )
        vet1[i] = rand()%256;
    // Agora vamos fazer uma copia de vet1 em vet2
    vet2 = vet1; // Isto não é uma copia porque ...
    printf("vet1[5] = %d\n", vet1[5]);
    printf("vet2[5] = %d\n", vet2[5]);
    vet2[5] = 400;
    printf("vet2[5] = %d\n", vet2[5]);
    printf("vet1[5] = %d\n", vet1[5]);
    return 0;
}