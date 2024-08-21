#include <stdio.h>

int main() {
    int num, max_digit = -1;

    printf("enter number: ");
    scanf("%d", &num);

  
    num = num < 0 ? -num : num;

    while (num > 0) {
        int digit = num % 10; 
        if (digit > max_digit) {
            max_digit = digit; 
        }
        num /= 10; 
    }

   
    printf("maximum digit is: %d\n", max_digit);

    


    
}
