#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[30];
    int i = 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);

    while (i < 10) {
        printf("%d - %s\n", i, nome);
        i++;
    }

    return (0);
}