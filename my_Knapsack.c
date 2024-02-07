#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ARR_SIZE 5
#define MAX_W 20

int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    return 0;
}

int knapSack(int weights[], int values[], int selected_bool[])
{
    int matrix[ARR_SIZE + 1][MAX_W + 1];
    for (int i = 0; i <= MAX_W; i++)
    {
        matrix[0][i] = 0;
    }
    for (int i = 0; i < ARR_SIZE + 1; i++)
    {
        matrix[i][0] = 0;
    }
    for (int i = 1; i < ARR_SIZE + 1; i++)
    {
        for (int j = 1; j <= MAX_W; j++)
        {
            int w = weights[i - 1];
            int v = values[i - 1];
            if (j - w >= 0)
            {
                matrix[i][j] = findMax(matrix[i - 1][j], matrix[i - 1][j - w] + v);
            }
            else
            {
                matrix[i][j] = matrix[i - 1][j];
            }
        }
    }
    int i = ARR_SIZE;
    int j = MAX_W;
    int sum = 0;
    while (j > 1 || i > 1)
    {
        if (matrix[i - 1][j] != matrix[i][j])
        {
            selected_bool[i - 1] = 1;
            sum = sum + values[i - 1];
            j = j - weights[i - 1];
            i = i - 1;
        }
        else
        {
            i = i - 1;
        }
    }
    return sum;
}
int main()
{
    int weights[ARR_SIZE] = {0};
    int values[ARR_SIZE] = {0};
    char *strings[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
    {
        strings[i] = (char *)malloc(100 * sizeof(char));
        scanf("%s", strings[i]);
        scanf("%d", &values[i]);
        scanf("%d", &weights[i]);
    }
    int bool[ARR_SIZE]={0};
    int sum = knapSack(weights, values, bool);
    printf("Maximum profit: %d\n", sum);
    int counter = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (bool[i] == 1)
        {
            counter++;
        }
    }
    char *result[counter];
    int j = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (bool[i] == 1)
        {
            result[j] = strings[i];
            j++;
        }
    }
    printf("Selected items:") ;
    for (int i = 0; i < j-1; i++)
    {
        printf(" %s" ,result[i]);
    }
    printf(" %s",result[j-1]);
}
