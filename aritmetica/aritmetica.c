#include <stdio.h>

int main() {
    int primeiroNumero = 50,
        segundoNumero = 25;
    
    int soma = primeiroNumero + segundoNumero;
    int subtracao = primeiroNumero - segundoNumero;
    int multiplicacao = primeiroNumero * segundoNumero;
    int divisao = primeiroNumero / segundoNumero;
    int resto = primeiroNumero % segundoNumero;
    
    printf("Resultado da soma: %i\n", soma, "\n");
    printf("Resultado da subtracao: %i\n", subtracao);
    printf("Resultado da multiplicacao: %i\n", multiplicacao);
    printf("Resultado da divisao: %i\n", divisao);
    printf("Resultado do resto da divisao: %i\n", resto);
	    
    return (0);
}
