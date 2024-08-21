#include<stdio.h>
int main(){
    int i = 0 ,num , sum = 1 ;

    while(i < 10 ){
        printf("enter 10 number :");
        scanf("%d",&num);
        sum += num;
        i++;
    } 
    printf("10 number sum is :%d",sum);
    printf("\n");
}