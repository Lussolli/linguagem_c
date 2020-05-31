#include <stdio.h>

int main()
{
    int quantidade = 30; // Guarda números inteiros.
    float total = 50.0; // Armazena números de ponto flutuante.
    char letra = 'F'; // Armazena um caractere.
    char nome[8] = "Leonardo"; // Declarada uma variável chamada "nome" que armazena até 8 caracteres.
    
    // Pode-se definir valores constantes.
    // Lembrar-se de não colocar ponto-e-vírgula no final da declaração de um valor constante.
    #define sobrenome "Lussolli"
    
    printf(sobrenome);
    return (0);
}

