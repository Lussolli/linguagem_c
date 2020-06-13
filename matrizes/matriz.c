#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int matriz[2][10];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 10; j++) {
            printf("Insira um número na linha %d, coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 10; j++) {
            printf("Elemento da linha %d, coluna %d é: %d\n", i, j, matriz[i][j]);
        }
    }

    return (0);
}
