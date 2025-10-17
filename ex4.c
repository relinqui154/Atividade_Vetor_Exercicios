#include <stdio.h>

int main() {
    int vetor[8], x, y;
    printf("Digite 8 numeros inteiros:\n");
    for(int i = 0; i < 8; i++) scanf("%d", &vetor[i]);
    printf("Digite as posicoes X e Y (0 a 7): ");
    scanf("%d %d", &x, &y);
    printf("Soma dos valores nas posicoes %d e %d: %d\n", x, y, vetor[x] + vetor[y]);
  
    return 0;
}
