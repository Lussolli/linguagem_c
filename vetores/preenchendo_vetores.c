#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a %d posição do vetor: ", (i + 1));
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    system("cls");

    printf("Valores digitados:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return (0);
}