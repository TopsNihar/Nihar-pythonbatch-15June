#include <stdio.h>
int plalin(int num) {
    int originalnum = num;
    int reversednum = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num = num / 10;
    }

    if (originalnum == reversednum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("enter number: ");
    scanf("%d", &number);

    if (plalin(number)) {
        printf("%d is a palindrome.\n", number);
    } 
    else {
        printf("%d is not a palindrome.\n", number);
    }


}
