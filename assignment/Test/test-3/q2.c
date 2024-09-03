//9] Implement a C program that multiplies two matrices.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, cons = 0;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            cons++;
        }
    }

    printf("number of vowels: %d\n", vowels);
    printf("number of consonants: %d\n", cons);

    return 0;
}
