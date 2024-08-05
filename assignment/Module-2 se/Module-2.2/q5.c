#include <stdio.h>

int main() {
    int num, abc_num , digit ,sum = 0;

    printf("enter number: ");
    scanf("%d", &num);

    abc_num = num < 0 ? -num : num;

    while (abc_num > 0) {
        digit = abc_num % 10; 
        sum += digit; 
        abc_num /= 10; 
    }

    if (num < 0) {
        sum = -sum;
    }

    printf("sum of num: %d\n", sum);

    

}
