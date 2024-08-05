#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
    printf("individual is:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
