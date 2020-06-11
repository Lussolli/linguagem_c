#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciando: Construa um programa que receba a idade de uma
 * pessoa e identifique sua classe eleitoral: não eleitor
 * (menor que 16 anos de idade), eleitor obrigatório (entre 18
 * e 65 anos) e eleitor facultativo (entre 16 e 18 anos
 * e maior que 65 anos).
 */
 
int main() {
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	if (idade < 16) {
		printf("Não eleitor");
	} else if (idade < 18 || idade > 65) {
		printf("Eleitor facultativo");
	} else {
		printf("Eleitor obrigatório");	
	}
	
	return (0);
}
