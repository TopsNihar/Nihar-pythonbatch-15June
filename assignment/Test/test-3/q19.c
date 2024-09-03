// Write a C program to find the length of a string without using any built-in functions.
#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    
   
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("enter a string: ");
    scanf("%s", str);

    int length = string_length(str);
    printf("length of the string is: %d\n", length);

    return 0;
}

