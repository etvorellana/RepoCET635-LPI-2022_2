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
    int vet1[N], vetPar[N], vetImpar[N];
    int i, j, k;
    // Vamos inicializar vet1 com valores aleatórios entre 0 e 255
    for(i = 0; i < N; i++ )
        vet1[i] = rand()%256;
    // Agora vamos separar os pares e os impares
    //j = k = 0;
    for(i = 0, j = 0, k = 0; i < N; i++)
    {
        if(vet1[i]%2 == 0) // par
        {
            //vetPar[j++] = vet1[i]; 
            vetPar[j] = vet1[i];
            j++;
        }else{
            //vetImpar[k++] = vet1[i];
            vetImpar[k] = vet1[i];
            k++;
        }
    }
    printf("vet1: \n");
    impVetorInt(vet1, N);

    printf("Foram %d valores pares\n", j);
    impVetorInt(vetPar, j);

    printf("Foram %d valores impares\n", k);
    impVetorInt(vetImpar, k);

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