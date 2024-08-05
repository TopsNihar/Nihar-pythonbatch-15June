#include <stdio.h>

int main() {
    int num, revers_num = 0, remainder;

    printf("enter a num: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10) {
        remainder = num % 10;
        revers_num = revers_num * 10 + remainder;
    }

      
      printf("reversed number = %d\n", revers_num);

    
}
