#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: A prefeitura de uma cidade está coletando informações sobre o
 * salário e o número de filhos dos habitantes. A leitura de dados é realizada
 * até que seja informado o valor -1 para o salário. Apresente a média de
 * salário da população, a média de filhos e o maior salário.
 * */

int main() {
    setlocale(LC_ALL, "portuguese");

    int quantidadeFilhos = 0,
        quantidadeSalarios = 0,
        filhos;
    
    float salario,
        somaSalarios = 0,
        mediaSalarios = 0,
        somaFilhos = 0,
        mediaFilhos = 0,
        maiorSalario = 0;

    do {
        salario = 0;
        printf("Informe seu salário: ");
        scanf("%f", &salario);
        fflush(stdin);

        if (salario == -1)
            break;

        if (salario > maiorSalario)
            maiorSalario = salario;
        
        filhos = 0;
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);
        fflush(stdin);

        somaSalarios += salario;
        somaFilhos += filhos;

        quantidadeSalarios++;
        quantidadeFilhos++;
    } while (salario != -1);

    mediaFilhos = somaFilhos / quantidadeFilhos;
    mediaSalarios = somaSalarios / quantidadeSalarios;

    printf("Maior salário: %.2f\n", maiorSalario);
    printf("Média de salários: %.2f\n", mediaSalarios);
    printf("Média de filhos: %.2f\n", mediaFilhos);

    return (0);
}