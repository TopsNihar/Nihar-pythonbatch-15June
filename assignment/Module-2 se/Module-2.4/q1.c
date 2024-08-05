#include <stdio.h>

int length(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];

    printf("enter a string :");
    scanf(" %[^\n]",&str);

    int lan = length(str);
    printf("your string length is %d", lan);
}