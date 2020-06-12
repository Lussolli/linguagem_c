#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
 * O problema consiste em auxiliar um professor no fechamento das notas de uma
 * turma. Para tanto, deve ser construído um programa que leia o código do aluno,
 * o número de notas da disciplina e as notas. Calcule a média final de cada aluno e
 * informe o número de alunos aprovados e reprovados. Para ser aprovado, o estudante
 * precisa obter média maior ou igual a seis. O programa é encerrado quando é
 * informado o código de aluno zero.
 */

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int codigoAluno,
        numeroNotas,
        aprovados = 0,
        reprovados = 0,
        i;
    float nota, soma, media;

    printf("Informe a quantidade de notas da disciplina: ");
    scanf("%d", &numeroNotas);
    fflush(stdin);

    do {
        printf("\nDigite o código do aluno: ");
        scanf("%d", &codigoAluno);
        fflush(stdin);

        if (codigoAluno == 0)
            break;

        soma = 0;
        for (i = 1; i <= numeroNotas; i++) {
            printf("Informe a %d nota do aluno: ", i);
            scanf("%f", &nota);
            fflush(stdin);
            
            soma += nota;
        }

        media = soma / numeroNotas;

        if (media >= 6) {
            aprovados++;
        } else {
            reprovados++;
        }
    } while (codigoAluno != 0);

    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Quantidade de alunso reprovados: %d\n", reprovados);

    return (0);
}