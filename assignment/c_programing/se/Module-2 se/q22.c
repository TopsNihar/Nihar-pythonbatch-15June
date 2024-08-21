 #include <stdio.h>

    int calculate_interest(int principal, int rate, int years) {
    int amount = principal;
    for (int i = 0; i < years; i++) {
        amount *= (1 + rate / 100);
    }
    return amount - principal; 
    }

int main() {
    int principal, rate, interest;
    int years;

    printf("enter the principal amount : ");
    scanf("%d", &principal);

    printf("enter the annual interest rate : ");
    scanf("%d", &rate);

    printf("enter the number of years: ");
    scanf("%d", &years);

    interest = calculate_interest(principal, rate, years);

    printf("The interest is: %d\n", interest);
    printf("The accumulated amount is: %d\n", principal + interest);

    return 0;
}
