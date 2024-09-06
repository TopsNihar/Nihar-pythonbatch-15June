#include <stdio.h>

int main() {
int add , mul , sub , divi , mod ,res ,no1 ,no2;

printf("enter your value: ");
scanf("%d %d", &no1, &no2);
res=no1+no2;

printf("%d+%d = %d", no1,no2,res);

printf("\nenter your value: ");
scanf("%d %d", &no1, &no2);
res=no1-no2;

printf("%d-%d = %d", no1,no2,res);

printf("\nenter your value: ");
scanf("%d %d", &no1, &no2);
res=no1*no2;

printf("%d*%d = %d", no1,no2,res);

printf("\nenter your value: ");
scanf("%d %d", &no1, &no2);
res=no1/no2;

printf("%d/%d = %d", no1,no2,res);

printf("\nenter your value: ");
scanf("%d %d", &no1, &no2);
res=no1%no2;

printf("%d % %d = %d", no1,no2,res);

    return 0;
}