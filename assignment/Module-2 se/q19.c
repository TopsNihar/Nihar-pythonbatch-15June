#include <stdio.h>

int main() {
    int principal, rate, amount, compoundinterest;
    int timescompounded, years;
    int i;

    printf("enter principal amount : ");
    scanf("%d", &principal);

    printf("enter annual interest rate: ");
    scanf("%d", &rate);

    printf("enter the number of times interest per year: ");
    scanf("%d", &timescompounded);

    printf("enter the number of years the money is invested : ");
    scanf("%d", &years);

    rate /= 100;

    amount = principal;

    for (i = 0; i < timescompounded * years; i++) {
        amount *= (1 + rate / timescompounded);
    }

    compoundinterest = amount - principal;

    printf("The compound interest is: %d\n", compoundinterest);
    printf("The accumulated amount is: %d\n", amount);

    return 0;
}


