#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[10];
    int i, j, troca;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d elemento: ", (i + 1));
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    for (i = 0; i < 9; i++) {
        for (j = i+1; j < 10; j++) {
            if (vetor[i] > vetor[j]) {
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }

    printf("Vetor ordenado!\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return (0);
}