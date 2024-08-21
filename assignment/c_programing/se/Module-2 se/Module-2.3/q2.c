#include<stdio.h>

int addition(int num1 , int num2){
    return num1 + num2;
}
int sub(int num1 , int num2){
    return num1 - num2;
}
int mul(int num1 , int num2){
    return num1 * num2;
}
int divison(int num1 , int num2){
    return num1 / num2;
}
 int main(){
    int option , num1 ,num2 ,ans ;

    printf("\n1.addition\n2.sub\n3.mul\n4.div");

    printf("plese choose :");
    scanf("%d",&option);

    printf("enter a num1 value :");
    scanf("%d",&num1);

    printf("enter a num2 value :");
    scanf("%d",&num2);

    switch(option){
        case 1:
          printf("your option is addition");
          ans = addition(num1,num2);
        break; 
        case 2:
          printf("your option is substrction");
          ans = sub(num1,num2);
        break;
        case 3:
          printf("your option is multiplication");
          ans = mul(num1,num2);
        break;
        case 4:
          printf("your option is divison");
          ans = divison(num1,num2);
        break;
        default :
          printf("choose correct option");
        break;

       
    }

     printf("your answer is :%d",ans); 

 }