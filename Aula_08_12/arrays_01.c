#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int main(void)
{
    // definindo a semente do gerador de NA
    srand(time(NULL));
    // Declarando as variáveis do meu programa
    int vet1[N], vet2[N];
    int i, j;
    // Vamos inicializar vet1 com valores aleatórios entre 0 e 255
    for(i = 0; i < N; i++ )
        vet1[i] = rand()%256;
    // Agora vamos fazer uma copia de vet1 em vet2
    vet2 = vet1; // Isto não funciona
    return 0;
}