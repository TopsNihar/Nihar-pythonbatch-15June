#include <stdio.h>

int main() {
    int a, b, temp;

    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("after swapping using a third variable:\n");
    printf("first number: %d\n", a);
    printf("second number: %d\n", b);

    return 0;
}
