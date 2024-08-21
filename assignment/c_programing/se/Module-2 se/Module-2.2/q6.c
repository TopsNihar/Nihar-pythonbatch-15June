#include<stdio.h>

int main() {

    int n, num1 = 0, num2 = 1, next;

    printf("enter a number : ");
    scanf("%d", &n);

    printf("fibonacci Series %d:\n", n);
    printf("%d, %d, ", num1, num2);

    next = num1 + num2;
    while (next <= n) {
        printf("%d, ", next);
        num1 = num2;
        num2 = next;
        next = num1 + num2;
    }

    printf("\n");




}
