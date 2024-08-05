#include<stdio.h>
int main(){
    int i ;
    int number  ;

    printf("enter table number ");
    scanf("%d",&number);

    for(i=1 ; i<=10 ;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
}