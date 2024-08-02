#include <stdio.h>

int main() {
    int monthlysalary, annualsalary;

    printf("Enter the monthly salary of the person: ");
    scanf("%d", &monthlysalary);

    annualsalary = monthlysalary * 12;

    printf("The annual salary is: %d\n", annualsalary);

    return 0;
}
