#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define COR_RESET "\x1B[0m"
#define COR_VERDE "\x1B[32m"
#define COR_VERMELHO "\x1B[31m"

int main()
{
    char M[3][10], G[10], nota[3];
    int ID[3], S[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Gabarito dos Alunos!\n\n");
        printf("Aluno %d: \n", i + 1);

        printf("\nA, B, C, D ou E\n\n");

        for (int j = 0; j < 10; j++)
        {
            printf("%d-R: ", j + 1);
            scanf(" %c", &M[i][j]);
            M[i][j] = toupper(M[i][j]);
        }
        printf("ID de Matricula: ");
        scanf("%d", &ID[i]);
        getch();
        system("cls");
    }

    printf("\n\nGabarito Geral:\n");
    printf("\nA, B, C, D ou E\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d-R: ", i + 1);
        scanf(" %c", &G[i]);
        G[i] = toupper(G[i]);
        if (G[i] != 'A' && G[i] != 'B' && G[i] != 'C' && G[i] != 'D' && G[i] != 'E')
        {
            printf("Alternativa invalida!\n");
            i--;
        }
    }
    getch();
    system("cls");

    for (int i = 0; i < 3; i++)
    {
        nota[i] = 0;
        for (int j = 0; j < 10; j++)
        {
            if (M[i][j] == G[j])
            {
                nota[i] += 1;
            }
        }
    }
    printf("\n\n");
    printf("Gabarito Geral:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d-R: %c\n", i + 1, G[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("ID: %d\n", ID[i]);
        printf("Nota: %d\n", nota[i]);
        if (nota[i] >= 7)
        {
            printf("Aprovacao:" COR_VERDE " Aprovado" COR_RESET);
        }
        else
        {
            printf("Aprovacao: " COR_VERMELHO "Reprovado" COR_RESET);
        }
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            printf("%d-R: %c\n", j + 1, M[i][j]);
        }
        printf("\n\n");
    }
}