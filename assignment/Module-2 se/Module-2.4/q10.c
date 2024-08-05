#include <stdio.h>

void sstring(char source[], int start, int length, char d[])
{
    int i;
    for (i = 0; i < length && source[start + i] != '\0'; i++)
    {
        d[i] = source[start + i];
    }
    d[i] = '\0';
}

int main()
{
    char source[100],sub[100];
    int start,length;

    printf("enter a string: ");
    scanf("%[^\n]", source); 

    printf("enter index for sub str: ");
    scanf("%d", &start);

    printf("enter length of sub str: ");
    scanf("%d", &length);

    sstring(source, start, length, sub);

    printf("original str: %s\n", source);
    printf("Substring from index %d with length %d: %s\n", start, length, sub);

}
