#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Fa�a um programa que leia um
 * n�mero e informe se ele � divis�vel por cinco.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero % 5 == 0)
		printf("O n�mero � divis�vel por cinco.");
	else
		printf("O n�mero n�o � divis�vel por cinco.");
	
	return (0);
}
