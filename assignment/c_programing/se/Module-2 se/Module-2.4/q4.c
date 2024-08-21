#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, word_count = 0;
    int word = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            word = 0;
        } else {
            if (word == 0) {
                word_count++;
                word = 1; 
            }
        }
    }

    printf("total number of words: %d\n", word_count);

    return 0;
}
