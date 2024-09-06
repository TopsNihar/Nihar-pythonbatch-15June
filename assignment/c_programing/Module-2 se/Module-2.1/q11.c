#include <stdio.h>

int main() {
 int num;
 printf("enter the number which is you cheak: ");
 scanf("%d",&num);
 
 (num % 2 == 0)?printf("number is even",num):printf("number is odd",num);
    return 0;
}