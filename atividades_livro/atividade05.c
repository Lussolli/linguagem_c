#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem,
 * na tela: "Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, <nome>";
 * onde o campo <nome> deve ser substituído pelo nome informado pelo usuário.
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, %s", nome);
	
	return (0);
}

