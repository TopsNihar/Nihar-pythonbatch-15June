#include <stdio.h>
#include <string.h>
void rstring(char str[]) {
    int length = strlen(str);
    for (int i = 0;i< length/2;i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int ispalin(char str[]) {
    int length = strlen(str);
    for (int i = 0;i<length/2;i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    char str[100];

    printf("enter a string: ");
    scanf("%[^\n]", str); 

    rstring(str);

    if (ispalin(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }


}
