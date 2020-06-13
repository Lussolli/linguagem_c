#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * Enunciado: Elabore um programa que apresente todos os números
 * divisíveis por três que sejam menores que 100.
 * */

int main() {
    setlocale(LC_ALL, "portuguese");

    int i;
    for (i = 0; i < 100; i++)
        if (i % 3 == 0)
            printf("%d\n", i);
    
    return (0);
}