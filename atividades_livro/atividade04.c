#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
 * Escreva um programa que receba dois n�meros,
 * calcule e apresente o resultado do primeiro
 * n�mero elevado ao segundo. 
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float primeiroNumero, segundoNumero, resultado;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &primeiroNumero);
	fflush(stdin);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &segundoNumero);
	fflush(stdin);
	
	resultado = pow(primeiroNumero, segundoNumero);
	
	printf("Resultado: %.2f", resultado);
	
	return (0);
}
