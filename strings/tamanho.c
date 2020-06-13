#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main() {
    char nome[80];
    int tamanho;

    printf("Digite o seu nome completo: ");
    gets(nome);

    tamanho = strlen(nome);
    printf("O comprimento do nome é %d\n", tamanho);

    return (0);
}