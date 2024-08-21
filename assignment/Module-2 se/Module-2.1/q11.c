#include <stdio.h>

int main() {
    float length;
    float circumference;

    printf("enter the length of one side of the square: ");
    scanf("%f", &length);

    circumference = 4 * length;

    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}
