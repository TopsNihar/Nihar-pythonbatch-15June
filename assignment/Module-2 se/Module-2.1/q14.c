#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter  second number: ");
    scanf("%d", &num2);

    printf("enter third number: ");
    scanf("%d", &num3);

    int large = num1;

    if (num2 > large)
     {
        large = num2;
    }

    if (num3 > large)
     {
        large = num3;
    }

    printf("The largest number is %d, %d, and %d is %d\n", num1, num2, num3, large);

    return 0;
}
