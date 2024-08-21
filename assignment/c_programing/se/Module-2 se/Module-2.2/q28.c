#include <stdio.h>

int main() {
    int i, num = 1;

    for (i = 1; i <=6; i++) {
        if (i % 2 == 1) {
            num *= 2;
        } else {
            num *= 3;
        }
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}
