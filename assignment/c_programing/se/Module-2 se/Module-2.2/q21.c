#include <stdio.h>

int main() {
    int i = 0;
    
    while (i < 3) {
        int num, org_num, revers_num = 0, remainder;
        
        printf("enter number %d: ",i + 1);
        scanf("%d", &num);

        org_num = num;

        while (num != 0) {
            remainder = num % 10;
            revers_num = revers_num * 10 + remainder;
            num /= 10;
        }

        if (org_num == revers_num) {
            printf("%d is a palindrome.\n", org_num);
        } 
        else {
            printf("%d is not a palindrome.\n", org_num);
        }

        i++;
    }

}
