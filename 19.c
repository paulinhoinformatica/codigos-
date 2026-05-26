#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ANSI_RESET "\x1b[0m"
#define ANSI_RED "\x1b[31m"
#define ANSI_GREEN "\x1b[32m"
#define ANSI_BLUE "\x1b[34m"
#define ANSI_YELLOW "\x1B[33m"

int main()
{
    float M[5][4], maior = 0, media[5];

    // [0] matricula
    // [1] prova
    // [2] trabalho
    // [3] nota final

    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno %d!\n\n", i + 1);

        printf("Matricula: ");
        scanf("%f", &M[i][0]);

        printf("Media de prova: ");
        scanf("%f", &M[i][1]);

        printf("Media de trabalho: ");
        scanf("%f", &M[i][2]);

        M[i][3] = M[i][1] + M[i][2];

        getch();
        system("cls");
    }

    // calcular media
    for (int i = 0; i < 5; i++)
    {
        media[i] = (M[i][1] + M[i][2]) / 2;
    }

    // maior nota
    for (int i = 0; i < 5; i++)
    {
        if (maior < M[i][3])
        {
            maior = M[i][3];
        }
    }

    printf("\n\n\n");

    printf(ANSI_YELLOW "===============================\n");
    printf("        Maior Nota: %.2f", maior);
    printf("\n===============================\n" ANSI_RESET);

    printf("\n");

    printf(ANSI_BLUE "--------------------------------\n" ANSI_RESET);

    printf("\nMedia:\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("ALUNO: %.0f\n", M[i][0]);
        printf("Media: %.2f\n\n", media[i]);
    }
}