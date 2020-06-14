#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int fatorial(int numero) {
    if (numero == 0)
        return 1;
    else
        return numero * fatorial(numero - 1);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);
    fflush(stdin);

    printf("!%d = %d\n", numero, fatorial(numero));

    return (0);
}
