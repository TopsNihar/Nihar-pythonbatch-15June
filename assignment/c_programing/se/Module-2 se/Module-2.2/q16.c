#include<stdio.h>
int main(){
    int i = 0 ,num , sum = 1 ;
     
     printf("enter only natural  number :");
     scanf("%d",&num);

    while(i < num ){
        printf("enter 10 number :");
        scanf("%d",&num);
        sum += num;
        i++;
    } 
    printf("10 number sum is :%d",sum);
    printf("\n");
}