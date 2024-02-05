#include <stdio.h>
#define N 10

void f_1(int mat[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    return 0;
}
void builder(int mat[][N])
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i != j)
                {
                    if (mat[i][j] == 0 || mat[i][j] > (mat[i][k] + mat[k][j]))
                    {
                        if ((mat[i][k] != 0 && mat[k][j] != 0))
                        {
                            mat[i][j] = (mat[i][k] + mat[k][j]);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
void f_2(int i, int j, int matrix[][N])
{
    if (matrix[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
int f_3(int i, int j, int matrix[][N])
{
    if (matrix[i][j] != 0)
    {
        printf("%d\n", matrix[i][j]);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}