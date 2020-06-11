#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[30];
	int i;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	for (i = 0; i < 10; i++)
		printf("%s\n", nome);
	
	return (0);
}
