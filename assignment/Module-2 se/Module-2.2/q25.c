#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("sum 1^2 to %d^2 = %d\n", n, sum);

}
