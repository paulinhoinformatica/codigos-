#include <stdio.h>

int main()
{
    int M[5][5], x, p = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d* Valor: ", p);
            scanf("%d", &M[i][j]);
            p++;
        }
    }
    printf("\nValor de X: ");
    scanf("%d", &x);

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (x == M[i][j])
            {
                printf("Linha: %d\nColuna: %d", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("Nao encontrado!");
}