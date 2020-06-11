#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero % 2 == 0)
		printf("Raiz quadrada de %d é %.2f", numero, sqrt(numero));
	else
		printf("%d elevado ao quadrado é %.2f", numero, pow(numero, 2));
	
	return (0);
}

