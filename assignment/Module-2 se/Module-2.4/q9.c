#include <stdio.h>
int main()
{
    char str[100];
    int max_chars = 0, current_chars = 0;
    int i = 0;

    printf("enter a string: ");
    scanf("%[^\n]", str); 

    while (str[i] != '\0')
    {
        current_chars++;
        if (current_chars > max_chars)
        {
            max_chars = current_chars;
        }
        i++;
    }

    printf("number of string char is: %d\n", max_chars);

}
