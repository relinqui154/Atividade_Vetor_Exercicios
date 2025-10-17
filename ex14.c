#include <stdio.h>

int main() {

    int vetor[10], i, j, repetido = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    printf("Valores repetidos:\n");

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) { printf("%d ", vetor[i]); repetido = 1; break; }
        }
    }
    if(!repetido) printf("Nao existem valores iguais.\n");

    return 0;

}
