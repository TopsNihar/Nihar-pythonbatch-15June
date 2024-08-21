 #include <stdio.h>

int main() {
    int monthlysalary, insurancepremium, loaninstallment, remainingsalary;

    printf("enter the monthly salary: ");
    scanf("%d", &monthlysalary);

    insurancepremium = monthlysalary * 0.10;

    loaninstallment = monthlysalary * 0.10;

    remainingsalary = monthlysalary - (insurancepremium + loaninstallment);

    printf("insurance premium: %d\n", insurancepremium);
    printf("loan installment: %d\n", loaninstallment);
    printf("remaining salary: %d\n", remainingsalary);

    return 0;
}
