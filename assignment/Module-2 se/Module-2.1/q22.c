#include <stdio.h>

int main() {
    float basicsalary, hra, da, gross_salary;

    printf("enter the basic salary: ");
    scanf("%f", &basicsalary);

    if (basicsalary <= 10000) {
        hra = basicsalary * 0.20;
        da = basicsalary * 0.80; 
    } 
    else if (basicsalary <= 20000) {
        hra = basicsalary * 0.25; 
        da = basicsalary * 0.90; 
    } 
    else {
        hra = basicsalary * 0.30; 
        da = basicsalary * 0.95; 
    }

    gross_salary = basicsalary + hra + da;

    printf("basic Salary: %.2f\n", basicsalary);
    printf("hra: %.2f\n", hra);
    printf("da: %.2f\n", da);
    printf("gross salary: %.2f\n", gross_salary);

    return 0;
}


