#include <stdio.h>

int main() {
    char symbols;
    
    printf("enter a character: ");
    scanf("%c", &symbols);
    
    printf("the acsii value of '%c' is %d.\n", symbols, (int)symbols);

    return 0; 
}
