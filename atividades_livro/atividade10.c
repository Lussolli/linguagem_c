#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: De acordo com uma tabela médica, o peso
 * ideal está relacionado com a altura e o sexo.
 * Elabore um algoritmo que receba altura e sexo
 * de uma pessoa e calcule e imprima o seu peso ideal,
 * sabendo que:
 *
 * Para homens -> (72.7 x altura) - 58
 * Para mulheres -> (62.1 x altura) - 44.7
 */

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float altura, pesoIdeal;
	char genero;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("Digite seu gênero: ");
	scanf("\n%c", &genero);
	fflush(stdin);
	
	if (genero == 'F' || genero == 'f') {
		pesoIdeal = (62.1) * altura - 44.7;
	} else {
		pesoIdeal = (72.7 * altura) - 58;
	}
	
	printf("Peso ideal: %.2f", pesoIdeal);
	
	return (0);
}
