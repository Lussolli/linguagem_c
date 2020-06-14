#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int fibonacci(int numero) {
    if (numero == 0 || numero == 1)
        return numero;
    else
        return fibonacci(numero - 2) + fibonacci(numero - 1);

}

int main() {
    setlocale(LC_ALL, "portuguese");

    int fibo = fibonacci(30);
    printf("%d\n", fibo);

    return (0);
}