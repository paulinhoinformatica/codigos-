#include <stdio.h>

int main()
{
    int M[3][3], p = 1, x = 0, soma = 0;

    printf("Preencha a Matriz!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d* Valor: ", p);
            scanf("%d", &M[i][j]);
            p++;
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                soma = soma + M[i][j];
            }
        }
    }

    printf("Soma: %d", soma);
}