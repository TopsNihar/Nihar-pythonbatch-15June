#include<stdio.h>
#include<ctype.h>

void countc(char str[]){

int alpha = 0, digit = 0, special = 0, i = 0;

       while(str[i] != '\0'){

        if(isalpha(str[i])){
            alpha++;
        }
        if (isdigit(str[i]))
        {
            digit++;
        }
        if (isspace(str[i]))
        {
            special++;
        }
        i++;
       }
       printf("Total alphabets: %d\n", alpha);
       printf("Total digits: %d\n", digit);
       printf("Total special characters: %d\n", special);
}

int main(){
    char str[100];

    printf("enter a string :");
    scanf("%[^\n]", str);

    countc(str);
}