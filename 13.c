#include <stdio.h>

int main()
{
    int M[4][4], T[4][4], p = 1;

    printf("Preencha a Matriz com numeros de 1 a 20!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d* Valor: ", p);
            scanf("%d", &M[i][j]);
            p++;
            if (M[i][j] > 20 || M[i][j] < 1)
            {
                printf("Numero invalido!\n");
                return 0;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
            {
                T[i][j] = 0;
            }
            else
            {
                T[i][j] = M[i][j];
            }
        }
    }

    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%2.d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ", T[i][j]);
        }
        printf("\n");
    }
}