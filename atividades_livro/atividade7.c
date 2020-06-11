#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Faça um programa que leia um
 * número e informe se ele é divisível por cinco.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero % 5 == 0)
		printf("O número é divisível por cinco.");
	else
		printf("O número não é divisível por cinco.");
	
	return (0);
}
