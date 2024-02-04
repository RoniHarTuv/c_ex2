#include <stdio.h>

void get_data()
{
    char items[] = {'A', 'B', 'C', 'D', 'E'};
    float value[5];
    float weight[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for item %c: ", items[i]);
        scanf("%f", &value[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter weight for item %c: ", items[i]);
        scanf("%f", &weight[i]);
    }

    printf("Items = [A, B, C, D, E]\n");
    printf("Values = [%f, %f, %f, %f, %f]\n", value[0], value[1], value[2], value[3], value[4]);
    printf("Weights = [%f, %f, %f, %f, %f]\n", weight[0], weight[1], weight[2], weight[3], weight[4]);
}
void selectItems(float weights[], float values[], char * strings[], int numStrings){
    
}