#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Elabore um programa que receba o nome e a idade
 * de uma pessoa e informe o nome, a idade e o valor da
 * mensalidade do plano de saúde. A tabela a seguir apresenta
 * os valores de mensalidade:
 *
 * Até 18 anos        | R$ 50,00
 * De 19 a 29 anos    | R$ 70,00
 * De 30 a 45 anos    | R$ 90,00
 * De 46 a 65 anos    | R$ 130,00
 * Acima de 65 anos   | R$ 170,00
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[30];
	int idade;
	float mensalidade;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	if (idade <= 18) {
		mensalidade = 50.0;
	} else if (idade <= 29) {
		mensalidade = 70.0;
	} else if (idade <= 45) {
		mensalidade = 90.0;
	} else if (idade <= 65) {
		mensalidade = 130.0;
	} else {
		mensalidade = 170.0;
	}
	
	system("cls");
	
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Mensalidade: R$ %.2f\n", mensalidade);
	
	system("pause");
	
	return (0);
}
