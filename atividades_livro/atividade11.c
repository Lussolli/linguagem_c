#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int pares = 0,
        impares = 0,
        i = 1;

    while (i != 0) {
        printf("Digite um número inteiro: ");
        scanf("%d", &i);
        fflush(stdin);

        if (i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return (0);
}