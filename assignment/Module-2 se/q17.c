#include <stdio.h>

#define pre_percent 0.05 

int main() {
    int salary, premium;

    printf("enter the salary of the person: ");
    scanf("%d", &salary);

    premium = salary * pre_percent;

    printf("The insurance premium is: %d\n", premium);

    return 0;
}
