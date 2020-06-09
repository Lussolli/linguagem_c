#include <stdio.h>

int main() {
    int primeiroNumero, segundoNumero, soma;

    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo valor: ");
    scanf("%i", &segundoNumero);

    soma = primeiroNumero + segundoNumero;

    printf("Soma: %i\n", soma);
}
