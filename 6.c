#include <stdio.h>

int main()
{
    int M1[4][4], M2[4][4], M3[4][4], p = 1;

    printf("Matriz 1!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d* Valor: ", p);
            scanf("%d", &M1[i][j]);
            p++;
        }
    }

    printf("\n\nMatriz 2!\n");
    p = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d* Valor: ", p);
            scanf("%d", &M2[i][j]);
            p++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M1[i][j] > M2[i][j])
            {
                M3[i][j] = M1[i][j];
            }
            else
            {
                M3[i][j] = M2[i][j];
            }
        }
    }
    printf("\n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }
}