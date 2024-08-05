#include<stdio.h>

int cstring(char str1[],char str2[]){
    int i = 0;

    while(str1[i] != '\0' ||str2[i] != '\0'){
        if(str1[i] != str2[i]){
         return   str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}

    int main(){
        char str1[100], str2[100];

        printf("enter string 1 value :");
        scanf(" %[^\n]", str1);

        printf("enter string 2 value :");
        scanf(" %[^\n]", str2);

        int result = cstring(str1,str2);

        if(result == 0){
            printf("string is same");
        }
        else if(result<0){
            printf("first string smaller than secomd string ");
        }
        else{
            printf("second string is smaller than first string");
        }
    }
