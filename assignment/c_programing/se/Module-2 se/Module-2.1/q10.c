#include <stdio.h>

int main() {
    int num;
    
    printf("enter your choise: ");
    scanf("%d",&num);
    
    if(num>=1){
        printf("your input is positive.");
    }
    else if(num<=-1){
        printf("your input is negative.");
    }
    else{
        printf("your input is zero.");
    }
   
    return 0;
}