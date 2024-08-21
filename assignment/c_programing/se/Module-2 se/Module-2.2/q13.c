#include<stdio.h>
int main(){
    int num , factorial = 1;
    int i = 1;

    printf("enter number :");
    scanf("%d",&num);

    while(i <= num){
    
    factorial =factorial* i ;

    i++;
   
    }
     printf("factorial number is %d",factorial);


}