#include <stdio.h>

int main() {
    int ascii_value;
    
    printf("enter an ascii value (0-127): ");
    scanf("%d", &ascii_value);
    
    if (ascii_value < 0 || ascii_value > 127) {
        printf("invalid acsii value . between 0 and 127.\n");
        return 1; 
    }
    
    char character = (char)ascii_value;
    
    printf("the character for acsii value %d is '%c'.\n", ascii_value, character);

    return 0;
}
