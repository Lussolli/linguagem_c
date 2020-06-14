#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int calcularQuadrado(int *x);

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    fflush(stdin);

    calcularQuadrado(&numero);
    printf("O quadrado é %d\n", numero);

    return (0);
}

int calcularQuadrado(int *x) {
    *x = *x * (*x);
    return *x;
}
