#include<stdio.h>

unsigned long long factorial(int n){
    return  n * factorial (n-1) ;
}

int main() {

int number;
unsigned long long fact ;

printf("enter positive number :");
scanf("%d",&number);

fact = factorial(number);
printf("your factorial is %llu",fact);

}