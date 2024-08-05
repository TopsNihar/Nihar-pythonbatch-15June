#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;
    int number_2

    printf("enter a number: ");
    scanf("%d", &number);

    number_2 = number < 0 ? -number : number;

    last_digit = number_2 % 10;

    while (number_2 >= 10) {
        number_2 /= 10;
    }
    first_digit = number_2;

    sum = first_digit + last_digit;

    if (number < 0) {
        sum = -sum;
    }


    printf("sum of two numbers : %d\n", sum);

    

}
