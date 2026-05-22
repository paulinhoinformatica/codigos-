#include <stdio.h>

int main()
{
    int M[3][3], T[3][3], p = 1;

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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            T[j][i] = M[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
}