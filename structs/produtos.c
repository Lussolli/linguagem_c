#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct produto {
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main() {
    struct produto ficha;

    printf("Digite o código do produto: ");
    scanf("%d", &ficha.codigo);
    fflush(stdin);

    printf("Digite a descrição do produto: ");
    scanf("%s", ficha.descricao);
    fflush(stdin);

    printf("Digite o preço do produto: ");
    scanf("%f", &ficha.preco);
    fflush(stdin);

    printf("Digite o saldo do produto: ");
    scanf("%d", &ficha.saldo);
    fflush(stdin);

    system("cls");

    printf("Dados do produto:\n");
    printf("- Código: %d\n", ficha.codigo);
    printf("- Descrição: %s\n", ficha.descricao);
    printf("- Preço: R$ %.2f\n", ficha.preco);
    printf("- Saldo: %d\n", ficha.saldo);

    system("pause");

    return (0);
}
