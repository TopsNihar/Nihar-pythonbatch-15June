#include <stdio.h>
int main() {
    int numbers[5];
    int i;

    printf("enter numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

}
