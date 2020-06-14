#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float somar(float primeiroValor, float segundoValor) {
    return primeiroValor + segundoValor;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    
    float primeiroNumero, segundoNumero;

    printf("Digite um número: ");
    scanf("%f", &primeiroNumero);
    fflush(stdin);

    printf("Digite outro número: ");
    scanf("%f", &segundoNumero);

    printf("Resultado da soma: %.2f\n", somar(primeiroNumero, segundoNumero));

    system("pause");
    return (0);
}