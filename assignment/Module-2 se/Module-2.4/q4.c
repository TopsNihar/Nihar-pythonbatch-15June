#include <stdio.h>
#include <ctype.h> 

int countWords(char str[])
{
    int wordCount = 0;
    int i = 0;

    while (str[i] != '\0')
    {

        while (isspace(str[i]))
        {
            i++;
        }

        if (str[i] != '\0')
        {
            wordCount++;
        }

        while (str[i] != '\0' && !isspace(str[i]))
        {
            i++;
        }
    }

    return wordCount;
}

int main()
{
    char str[100]; 

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    int numWords = countWords(str);
    printf("Total number of words: %d\n", numWords);

}
