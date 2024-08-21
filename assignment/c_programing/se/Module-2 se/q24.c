 #include <stdio.h>

int main() {
    char names[3][50];     
    int salaries[3]; 
    int total_salary = 0.0; 
    int average_salary; 
    int i;

    for (i = 0; i < 3; i++) {
        printf("enter the name employee %d: ", i + 1);
        scanf("%s", names[i]); 

        printf("enter the salary of %s: ", names[i]);
        scanf("%d", &salaries[i]);

        total_salary += salaries[i]; 
    }

    average_salary = total_salary / 3;

    printf("\nemployee details:\n");
    for (i = 0; i < 3; i++) {
        printf("name: %s, salary: %d\n", names[i], salaries[i]);
    }

    printf("\ntotal salary: %d\n", total_salary);
    printf("average salary: %d\n", average_salary);

    return 0;
}
