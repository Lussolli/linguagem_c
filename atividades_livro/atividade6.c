#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
 * Escreva um programa que leia um número positivo inteiro
 * e apresente o quadrado e a raiz quadrada deste número. 
 */
 
int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	printf("Quadrado: %.2f\n", pow(numero, numero));
	printf("Raiz quadrada: %.2f", sqrt(numero));
	
	return (0);
}

