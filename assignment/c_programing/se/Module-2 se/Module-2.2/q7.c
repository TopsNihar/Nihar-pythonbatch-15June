#include<stdio.h>

int main() {
    int num, remainder, revers = 0;

   
    printf("enter number: ");
    scanf("%d", &num);

    while (num!=0){
        remainder = num % 10;
        revers = revers * 10 + remainder;
        num = num / 10;
    }
    printf("revers number is the : %d\n", revers);

    
    
    }
