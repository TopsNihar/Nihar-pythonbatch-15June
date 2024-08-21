#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("enter  positive num : ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of the series 1 + 2 + 3 + ... + %d = %d\n", n, sum);


}
