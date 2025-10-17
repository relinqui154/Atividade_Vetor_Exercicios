#include <stdio.h>

int main() {

    float notas[15], soma = 0;

    printf("Digite as notas dos 15 alunos:\n");
    for(int i = 0; i < 15; i++) {
    scanf("%f", &notas[i]); soma += notas[i]; }

    printf("Media geral da turma: %.2f\n", soma / 15);

    return 0;
}
