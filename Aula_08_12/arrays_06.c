#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

void impVetorInt(int array[], int tamanho);

int main(void)
{
    // definindo a semente do gerador de NA
    srand(time(NULL));
    // Declarando as variáveis do meu programa
    int vet1[N], vetOrd[N];
    int i, j, k;
    // Vamos inicializar vet1 com valores aleatórios entre 0 e 255
    for(i = 0; i < N; i++ )
        vet1[i] = rand()%256;
    // Agora vamos calcular a mediana
    for(i = 0, j = 0; i < N; i++)
    {
        int troca;
        for(k = 0; k < j; k++)
        {
            if(vet1[i] > vetOrd[k])
                break;
        }
        troca = vetOrd[k];
        vetOrd[k] = vet1[i];
        j++;
        for(int l = k+1; l < j; l++){
            vetOrd[l] = troca;
            vetOrd[k] = vet1[i];
        }
    }


    
    return 0;
}

void impVetorInt(int array[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d,\t", array[i]);
        if((i + 1) % 5 == 0 || (i + 1 == tamanho))
            printf("\n");
    }
}