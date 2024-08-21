#include <stdio.h>

int main()
{
    int array[5]; 
    int i, j, temp;

    printf("enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("array in ascending order:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    return 0;
}
