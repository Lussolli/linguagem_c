#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[30];
	int idade, anoNascimento;
	float altura;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	anoNascimento = 2020 - idade;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("Seu nome � %s\n", nome);
	printf("Sua idade � de %d anos\n", idade);
	printf("Voc� tem %.2f de altura\n", altura);
	printf("Voc� nasceu no ano de %d\n", anoNascimento);
	
	return (0);
}

