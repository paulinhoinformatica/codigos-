#include <stdio.h>
int main()
{
    int M[3][3], V[3], soma = 0, a=0;
    printf("Digite seus valores: ");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &M[i][j]);
        }
        
    }
    printf("\n\n");
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
        V[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            V[i] = V[i] + M[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("V%d: %d\n", i+1, V[i]);
    }
    
}