#include <stdio.h>
#include <stdlib.h>

int main(){

   
int *criarVetor(unsigned int tamanho_vetor)
{
    int *vetor = malloc(sizeof(int) * tamanho_vetor);
    return vetor;
}

void preencherVetor(int *vetor, int tamanho_vetor)
{
    for (int i = 0; i < tamanho_vetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

void apresentarDadosVetor(int *vetor, int tamanho_vetor)
{
    printf("[");

    if (tamanho_vetor == 0)
    {
        printf("vazio");
    }
    else
    {
        for (int i = 0; i < tamanho_vetor; i++)
        {
            (i == 0) ? printf("%d", vetor[i]) : printf(", %d", vetor[i]);
        }
    }

    printf("]\n");
}

void destruirVetor(int *vetor)
{
    free(vetor);
}

int main()
{
    // dados
    unsigned int tamanho_vetor = 0;
    int *vetor;

    // 1 - Leia o tamanho do vetor
    scanf("%u", &tamanho_vetor);

    // 2 - Aloque dinamicamente a memoria para o vetor
    vetor = criarVetor(tamanho_vetor);

    // 3 - leia os dados de um vetor
    preencherVetor(vetor, tamanho_vetor);

    // 4 - Apresente os dados do vetor
    apresentarDadosVetor(vetor, tamanho_vetor);

    // 5 - Desaloque a memoria alocada anteriormente
    destruirVetor(vetor);
 
    return 0;
}
