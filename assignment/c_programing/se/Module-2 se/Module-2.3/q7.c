#include<stdio.h>

int stringlength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("enter string: ");
    scanf("%[^\n]", str); 

    int length = stringlength(str);

    printf("Length of the string '%s' is %d.\n", str, length);


}
