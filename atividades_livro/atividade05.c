#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem,
 * na tela: "Bem-vindo(a) � disciplina de Algoritmos e L�gica de Programa��o II, <nome>";
 * onde o campo <nome> deve ser substitu�do pelo nome informado pelo usu�rio.
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Bem-vindo(a) � disciplina de Algoritmos e L�gica de Programa��o II, %s", nome);
	
	return (0);
}

