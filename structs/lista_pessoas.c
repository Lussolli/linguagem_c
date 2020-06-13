#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct pessoa {
    char nome[30];
    int idade;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    struct pessoa pessoas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Dados da %d pessoa:\n", (i + 1));
        
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);
    }

    system("cls");
    printf("Pessoas:\n");

    for (i = 0; i < 5; i++) {
        printf("Nome: %s\nIdade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }

    system("pause");

    return (0);
}