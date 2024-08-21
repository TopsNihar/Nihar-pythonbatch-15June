#include <stdio.h>
#include <ctype.h>

void rna(char *str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (isalpha(str[i])){                      
            str[j++] = str[i]; 
        }
        i++;
    }
    str[j] = '\0'; 
}

int main()
{
    char str[100];

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    rna(str);

    printf("non alphbetic char remove in str : %s\n", str);

    return 0;
}
