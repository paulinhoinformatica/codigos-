#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char M[5][10], G[10], nota[5], alternativa[4] = "ABCD";
    int T, ia;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("Gabarito dos Alunos!\n\n");
        printf("Aluno %d: \n", i + 1);

        printf("\nA, B, C ou D\n\n");

        for (int j = 0; j < 10; j++)
        {
            printf("%d-R: ", j + 1);
            scanf(" %c", &M[i][j]);
            M[i][j] = toupper(M[i][j]);
        }
        getch();
        system("cls");
    }

    for (int i = 0; i < 10; i++)
    {
        ia = rand() % 4;
        G[i] = alternativa[ia];
    }

    for (int i = 0; i < 5; i++)
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
    printf("Gabarito:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d-R: %c\n", i + 1, G[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d-R: %c\n", j, M[i][j]);
        }
        printf("\n\n");
    }

    printf("ALUNO       NOTA\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%2.d:           %d\n", i + 1, nota[i]);
    }
}