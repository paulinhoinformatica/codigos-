#include <stdio.h>

int main()
{
    int M[4][4], x = 1, c[2], p;

    printf("Insira os Valores!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d* Valor: ", x);
            scanf("%d", &M[i][j]);
            x++;
        }
    }

    printf("\n----------------------------------\n");

    p = M[1][1];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (p < M[i][j])
            {
                c[0] = i;
                c[1] = j;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n----------------------------------\n");
    printf("Localizacao do Maior Valor!\n");
    printf("Linha: %d\nColuna: %d", c[0] + 1, c[1] + 1);
}