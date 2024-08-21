#include<stdio.h>
int main(){
    int n ,i;
    int factorial =1;

    printf("enter factorial number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    factorial = factorial * i;
    }
  printf("factoril number is %d",factorial);
    
}