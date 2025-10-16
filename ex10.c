#include <stdio.h>

#define POS 15

int main() {

    int num[POS], soma = 0, media;

    for(int i = 0; i < POS; i++)
    {
        printf("Insira um valor: \n");
        scanf("%d", &num[i]);
        soma += num[i];
    }

    media = soma/POS;

    printf("A media geral das notas digitadas: ");
    for(int i = 0; i < POS; i++)
    {
        printf("%d ", num[i]);
    }
    printf("e: %d", media);

    return 0;
}
