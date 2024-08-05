//2D array

#include<stdio.h>
int main(){
    int array[2][5];
    int i , j ;

    for (i = 0; i < 2;i++){
        for (j = 0; j < 5;j++){
            printf("enter a value :");
            scanf("%d", &array[i][j]);
        }
        
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("your array [%d][%d]is :%d",i,j, array[i][j]);
        }
        printf("\n");
    }
}