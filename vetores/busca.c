#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    int vetor[10];
    int i, acha, busca;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d elemento: ", (i + 1));
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    printf("Digite o elemento que deseja achar: ");
    scanf("%d", &busca);
    fflush(stdin);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i < 10)) {
        if (vetor[i] == busca) {
            acha = 1;
        } else {
            i++;
        }
    }

    if (acha == 1) {
        printf("O elemento %d foi encontrado na posição %d.", busca, i);
    } else {
        printf("O elemento não foi encontrado.");
    }

    return (0);
}