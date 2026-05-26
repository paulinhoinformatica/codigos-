#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ANSI_RESET "\x1b[0m"
#define ANSI_RED "\x1b[31m"
#define ANSI_GREEN "\x1b[32m"
#define ANSI_BLUE "\x1b[34m"

int main()
{
    int M[10][3], nota1 = 0, nota2 = 0, nota3 = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Aluno %d: \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("Nota da Prova %d: ", j + 1);
            scanf("%d", &M[i][j]);
        }
        getch();
        system("cls");
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (M[i][j] == 1)
            {
                nota1++;
            }
            else if (M[i][j] == 2)
            {
                nota2++;
            }
            else if (M[i][j] == 3)
            {
                nota3++;
            }
        }
    }

    printf(ANSI_RED "Numero de Notas com 1 ponto:" ANSI_RESET " %d\n\n", nota1);
    printf(ANSI_BLUE "Numero de Notas com 2 ponto:" ANSI_RESET " %d\n\n", nota2);
    printf(ANSI_GREEN "Numero de Notas com 2 ponto:" ANSI_RESET " %d\n\n", nota2);
}