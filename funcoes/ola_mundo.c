#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void mostrarMensagem(char mensagem[100]) {
    printf(mensagem);
}

int main() {
    mostrarMensagem("Olá, mundo!\n");

    return (0);
}