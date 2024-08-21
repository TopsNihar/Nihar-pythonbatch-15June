#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_lan 100

void flsw(char *str)
{
    char smallest[max_lan], largest[max_lan];
    int smallest_len = max_lan, largest_len = 0;
    char word[max_lan];
    int word_len = 0;
    int i = 0, j = 0;

    smallest[0] = '\0';
    largest[0] = '\0';

    while (str[i]){
        if (isalpha(str[i])){
            word[word_len++] = tolower(str[i]); 
        }
        else if (word_len > 0){                          
            word[word_len] = '\0'; 

            if (word_len < smallest_len){
                strcpy(smallest, word);
                smallest_len = word_len;
            }
            if (word_len > largest_len){
                strcpy(largest, word);
                largest_len = word_len;
            }
            word_len = 0;
        }
        i++;
    }

    if (word_len > 0)
    {
        word[word_len] = '\0';

        if (word_len < smallest_len){
            strcpy(smallest, word);
            smallest_len = word_len;
        }
        if (word_len > largest_len){
            strcpy(largest, word);
            largest_len = word_len;
        }
    }
    printf("smallest word: %s\n", smallest);
    printf("largest word: %s\n", largest);
}

int main()
{
    char str[max_lan];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    flsw(str);

    
}
