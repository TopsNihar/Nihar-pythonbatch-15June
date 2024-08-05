#include <stdio.h>

int main() {
    int num, reversednum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    for (; temp != 0; temp /= 10) {
        remainder = temp % 10; 
        reversednum = reversednum * 10 + remainder; 
    }

    printf("Reversed number: %d\n", reversednum);

    return 0;
}
