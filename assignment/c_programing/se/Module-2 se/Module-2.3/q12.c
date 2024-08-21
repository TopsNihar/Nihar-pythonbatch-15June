#include<stdio.h>
int main(){
    int i ;
    char name[5];

    printf("enter 5 student name :");
        for(i=0;i<5;i++){
            printf("enter student %d", i + 1);
            scanf("%s",&name[5]);
            printf("name of student %d name : %s",i,name[5]);
        }
}