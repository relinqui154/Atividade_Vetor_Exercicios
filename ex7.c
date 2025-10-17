#include <stdio.h>

int main() {

    int vetor[10], i, maior, posicao;
    printf("Digite 10 numeros inteiros:\n");

    for(i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    maior = vetor[0]; posicao = 0;

    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) { maior = vetor[i]; posicao = i; }
    }
    printf("\nVetor:\n");

    for(i = 0; i < 10; i++) printf("%d ", vetor[i]);
    printf("\nMaior elemento: %d (posicao %d)\n", maior, posicao);

    return 0;
}
