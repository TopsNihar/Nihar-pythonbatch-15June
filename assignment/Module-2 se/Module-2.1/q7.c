
#include <stdio.h>

int main() {
    int marks;
    
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks<=-1 || marks>100){
        printf("plzz enter valid marks.");
    }
    else if(marks>=80){
        printf("grade A");
    }
    else if(marks>=60){
        printf("grade B");
    }
    else if(marks>=33){
        printf("grade c");
    }
    else if(marks<33){
         printf("you are fail,try next time");
    }
    return 0;
}