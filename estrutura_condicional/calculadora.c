#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
		
	float primeiroValor, segundoValor, resultado = 0.0;
	int opcao;
	
	printf("Calculadora\n\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &primeiroValor);
	fflush(stdin);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &segundoValor);
	fflush(stdin);
	
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	printf("Sua opção: ");
	scanf("%d", &opcao);
	fflush(stdin);
	
	switch (opcao) {
		case 1:
			resultado = primeiroValor + segundoValor;
			break;
		case 2:
			resultado = primeiroValor - segundoValor;
			break;
		case 3:
			resultado = primeiroValor * segundoValor;
			break;
		case 4:
			resultado = primeiroValor / segundoValor;
			break;
		default:
			printf("Opção inválida!\n");
			break;
	}
	
	printf("Resultado: %.2f", resultado);
}
