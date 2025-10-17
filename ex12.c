#include <stdio.h>[

int main() {
    float vetor[5], soma = 0, maior, menor;

    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) { scanf("%f", &vetor[i]); soma += vetor[i]; }

    maior = menor = vetor[0];

    for(int i = 1; i < 5; i++) {
        if(vetor[i] > maior) maior = vetor[i];

        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("\nValores: ");

    for(int i = 0; i < 5; i++) printf("%.2f ", vetor[i]);
    printf("\nMaior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, soma / 5);

    return 0;

}
