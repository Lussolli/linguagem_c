#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Elabore um programa que receba quatro
 * notas e calcule a média aritmética entre elas.
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float primeiraNota,
		segundaNota,
		terceiraNota,
		quartaNota,
		media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &terceiraNota);
	fflush(stdin);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &quartaNota);
	fflush(stdin);
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	
	printf("Média: %.2f", media);
	
	return (0);
}
