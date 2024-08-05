#include <stdio.h>
#include<string.h>
struct employee {
    int empid;
    char empname[50];
    float salary;
};

union Data {
    int intvalue;
    float floatvalue;
    char stringvalue[20];
};

int main() {
    struct employee emp;
    emp.empid = 1001;
    strcpy(emp.empname, "john doe");
    emp.salary = 50000.0;

    printf("structure ex:\n");
    printf("emo id: %d\n", emp.empid);
    printf("emp name: %s\n", emp.empname);
    printf("salary: %.2f\n", emp.salary);
    printf("emp strucure size : %lu bytes\n", sizeof(emp));
    printf("\n");

    union Data data;
    data.intvalue = 10;
    printf("Union ex :\n");
    printf("int Value: %d", data.intvalue);

    data.floatvalue = 20.5;
    printf("flopat value %.2f\n", data.floatvalue);

    strcpy(data.stringvalue, "Hello");
    printf("strind value: %s\n", data.stringvalue);

    printf("data union size : %lu bytes\n", sizeof(data));


}
