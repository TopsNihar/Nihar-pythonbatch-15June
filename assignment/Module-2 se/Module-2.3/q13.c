#include <stdio.h>
int main()
{
    int i;
    int array[5];

    for (i = 0; i < 5; i++)
    {
        printf("enter 5 number :\n");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf(" 5 number is %d:", array[i]);
        if (array[i] % 2 == 0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
    }
}