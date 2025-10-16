#include <stdio.h>

int main() {
    int numeros[6];
    int i, valor;

    printf("Digite 6 valores inteiros e pares:\n");


    for (i = 0; i < 6; ) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &valor);


        if (valor % 2 == 0) {
            numeros[i] = valor;
            i++;
        } else {
            printf("Erro: O valor digitado nao e par. Tente novamente.\n");
        }
    }

    printf("\nOs valores lidos na ordem inversa sao:\n");


    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
