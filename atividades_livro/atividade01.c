#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Escreva um programa que leia
 * um número inteiro e apresente seu antecessor
 * e seu sucessor.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero, antecessor, sucessor;
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("Antecessor: %d\n", antecessor);
	printf("Successor: %d", sucessor);
	
	return (0);
}
