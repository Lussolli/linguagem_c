#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int dia;
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	fflush(stdin);
	
	switch (dia) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Ter�a-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
		case 7:
			printf("S�bado");
			break;
		default:
			printf("Dia inv�lido");
			break;
	}
	
	return (0);
}
