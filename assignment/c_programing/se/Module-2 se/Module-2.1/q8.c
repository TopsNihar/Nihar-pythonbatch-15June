#include <stdio.h>

int main() {
    int height;
    printf("enter you height in cm:");
    scanf("%d",&height);
    
    if(height>=250){
        printf("you are tallest.");
    }
    else if(height>=200){
        printf("you are tall.");
    }
    else if(height>=150){
        printf("you are avg.");
    }
    else if (height>=100){
           printf("you are short.");
    }
    else if(height>50){
           printf("sorry but your very short.");
    }
    else if(height<=50){
           printf("plzzz enter valid number of your size.");
    }
    return 0;
}