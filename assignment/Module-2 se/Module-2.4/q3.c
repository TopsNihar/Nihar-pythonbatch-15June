#include <stdio.h>
int main()
{
    int i;
    char str[100];

    printf("enter a string :");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }
}