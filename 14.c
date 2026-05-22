#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int C[5][5], dado;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            C[i][j] = dado = rand() % 99;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}