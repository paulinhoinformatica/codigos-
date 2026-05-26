#include <stdio.h>

int main()
{
    int M[4][4], x = 1, m = 0;

    printf("Preencha os valores!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d* Valor: ", x);
            scanf("%d", &M[i][j]);
            x++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] > 10)
            {
                m++;
            }
        }
    }

    printf("\n-----------------------\n");

    printf("Quantidade: %d", m);
    //mas bah
}