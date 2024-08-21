#include <stdio.h>

int main() {
    int n, i, j, sum = 0, term_sum = 0;

    printf("enter a number  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term_sum = 0;
        for (j = 1; j <= i; j++) {
            term_sum += j;
        }
        sum += term_sum;
    }

    printf("Sum of the series from (1) + (1+2) + ... + (1+2+3+...+n) = %d\n", sum);

    return 0;
}
