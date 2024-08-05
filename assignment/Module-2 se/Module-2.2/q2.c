#include<stdio.h>
int main(){
    int i, n=5;
    
    
     printf("enter 5 numbers:");
    for(i=0;i<5;i++){
        printf("enter a number %d",i);
        scanf("%d",&i);
    }
    for(i=0;i<5;i++){
        printf("number %d",i);
    }
}