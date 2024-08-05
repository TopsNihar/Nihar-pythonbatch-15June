#include <stdio.h>
#include <math.h>

int main() {
    int number, org_number, remainder, result = 0, n = 0;

    printf("enter num: ");
    scanf("%d", &number);

    org_number = number;

    while (org_number != 0) {
        org_number /= 10;
        ++n;
    }

    org_number = number;

    while (org_number != 0) {
        remainder = org_number % 10;
        result += pow(remainder, n);
        org_number /= 10;
    }

    if (result == number)
        printf("%d armstrong number\n", number);
    else
        printf("%d not armstrong number\n", number);

   
   
}
