#include<stdio.h>
int main(){
    int i = 0 , even_num = 0 , odd_num = 0, multi_even = 0 , multi_odd=0 ,n = 5;
     int number[n];

    printf("enter 10 number :");

    while ( i < 5 ){
        printf("enter number ");
        scanf("%d\n",&number[i]);
        i++;
    }
    
    for (i=0 ; i<n ;i++){
         if(number[i]%2 == 0){
         even_num++;
         multi_even += number[i];
    }else{
        odd_num++;
        multi_odd +=number[i];
    }
    
    }

    printf("\nNumber of even numbers: %d\n", even_num);
    printf("Number of odd numbers: %d\n", odd_num);
    printf("Sum of even numbers: %d\n", multi_even);
    printf("Sum of odd numbers: %d\n", multi_odd);
}