#include <stdio.h>

int main() {
 int Birthdate,age;
 char add[200],name[100];
 
 printf("enter your name: ");
 scanf("%s", &name);
 
 printf("enter your birthdate: ");
 scanf("%d", &Birthdate);
 
 printf("enter your age: ");
 scanf("%d", &age);
 
 printf("enter your add: ");
 scanf("%s", &add);
 
 printf("your name is : %s\n", name);
 printf("your birthdate is : %d\n", Birthdate);
 printf("your age is : %d\n", age);
 printf("your add is : %s\n", add);

    return 0;
}