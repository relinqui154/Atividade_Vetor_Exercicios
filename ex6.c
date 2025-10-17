#include <stdio.h>

int main() {
    int vetor[10], i, maior, menor;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    maior = menor = vetor[0];

    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) maior = vetor[i];

        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior valor: %d\nMenor valor: %d\n", maior, menor);

    return 0;
}
