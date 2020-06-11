#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Faça um programa que receba o valor de um
 * depósito e o valor da taxa de juros, calcule e
 * apresente o valor do rendimento e o valor total
 * (valor do depósito + valor do rendimento).
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float valorDeposito, valorJuros, valorRendimento, valorTotal;
	
	printf("Digite o valor depositado: ");
	scanf("%f", &valorDeposito);
	fflush(stdin);
	
	printf("Digite o valor de juros: ");
	scanf("%f", &valorJuros);
	fflush(stdin);
	
	valorRendimento = valorDeposito * (valorJuros / 100);
	valorTotal = valorDeposito + valorRendimento;
	
	printf("Valor de rendimento: R$ %.2f\n", valorRendimento);
	printf("Valor total: R$ %.2f", valorTotal);
	
	return (0);
}
