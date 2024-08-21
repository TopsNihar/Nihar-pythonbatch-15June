#include<stdio.h>
int main(){
    int i;
    int array[5];
    int sum = 0;

    for (i = 0; i < 5; i++){
    printf("enter 5 number %d :",i+1);
    scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("array is :%d", array[i]);
        sum += array[i];
    }
    printf("\n");

    printf("sum of array 5 number :%d", sum);
}