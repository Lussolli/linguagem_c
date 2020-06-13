#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main() {
    char nome[80], sobrenome[80];

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o seu sobrenome: ");
    gets(sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("Nome: %s\n", nome);

    if (strstr(sobrenome, nome) == 0)
        printf("O sobrenome está contido no nome.\n");

    strlwr(nome);
    printf("Nome em minúsculo: %s\n", nome);

    strupr(nome);
    printf("Nome em maiúsculo: %s\n", nome);

    return (0);
}