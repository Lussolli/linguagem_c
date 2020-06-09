#include <stdio.h>

int main() {
    char nome[40];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Oi, %s!\n", nome);

    system("pause");
    return (0);
}
