// Write a C program to calculate the sum of the digits of an integer number entered by the user.
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;   
        sum += digit;       
        num /= 10;          
    }

    printf("sum of the digits: %d\n", sum);

    return 0;
}
