#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero % 2 == 0)
		printf("Raiz quadrada de %d � %.2f", numero, sqrt(numero));
	else
		printf("%d elevado ao quadrado � %.2f", numero, pow(numero, 2));
	
	return (0);
}

