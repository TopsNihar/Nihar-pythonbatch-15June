#include<stdio.h>
int main(){
    int i , even_count = 0 , odd_count = 0, sum_even = 0 , sum_odd=0 ,n = 10;
     int number[n];

    printf("enter 10 number :");

    for (i=0 ; i<n ; i++){
        printf("enter number ");
        scanf("%d\n",&number[i]);
    }
    
    for (i=0 ; i<n ;i++){
         if(number[i]%2 == 0){
         even_count++;
         sum_even += number[i];
    }else{
        odd_count++;
        sum_odd +=number[i];
    }
    
    }

    printf("\nNumber of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
}