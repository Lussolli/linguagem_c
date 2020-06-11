#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0;
    char nome[30];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);

    do {
        printf("%s\n", nome);
        i++;
    } while (i < 10);

    return (0);
}