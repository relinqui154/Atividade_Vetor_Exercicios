#include <stdio.h>
int main() {
    float vetor[10], quadrado[10];
    int i;
    printf("Digite 10 numeros reais:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i];
    }
    printf("\nVetor original:\n");
    for(i = 0; i < 10; i++) printf("%.2f ", vetor[i]);
    printf("\n\nVetor dos quadrados:\n");
    for(i = 0; i < 10; i++) printf("%.2f ", quadrado[i]);
    return 0;
}
