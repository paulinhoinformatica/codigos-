#include <stdio.h>
#include <math.h>

int main()
{
    double A[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
            {
                A[i][j] = (2 * i) + (7 * j) - 2;
            }
            if (i == j)
            {
                A[i][j] = pow(3 * i, 2) - 1;
            }
            if (i > j)
            {
                A[i][j] = pow(4 * i, 3) - pow(5 * j, 2) + 1;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%9.0lf", A[i][j]);
        }
        printf("\n\n");
    }
}