#include <stdio.h>

#define POS 6

int main() {

    int num[POS];

    for(int i = 0; i < POS; i++)
    {
        printf("Insira um valor: \n");
        scanf("%d", &num[i]);
    }

    printf("Os numeros digitados são: ");
    for(int i = 0; i < POS; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
