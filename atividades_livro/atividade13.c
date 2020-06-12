#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Faça um programa que leia um número
 * inteiro e calcule o seu fatorial. 
 * */

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, i, fatorial;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    fflush(stdin);

    fatorial = 1;
    for (i = 1; i <= numero; i++)
        fatorial = fatorial * i;

    printf("Fatorial de %d é %d", numero, fatorial);

    return (0);
}
