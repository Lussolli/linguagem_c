#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int multiplicar(int primeiroNumero, int segundoNumero) {
    return primeiroNumero * segundoNumero;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    fflush(stdin);

    for (i = 0; i <= 10; i++) {
        printf("%d\n", multiplicar(numero, i));
    }

    return (0);
}
