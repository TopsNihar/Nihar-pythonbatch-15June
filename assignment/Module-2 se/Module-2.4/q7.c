#include<stdio.h>
 
 void cstring(char sstring[], char dstring[]){
     int i = 0;

     while(sstring[i] != '\0'){
         dstring[i] = sstring[i];
         i++;
     }

     dstring[i] = '\0';
 }

 int main(){
     char sstring[100], dstring[100];

     printf("enter main string");
     scanf("%[^\n]", sstring);

     cstring(sstring, dstring);

     printf("origanal string is %s\n", sstring);
     printf("your copy string is %s\n", dstring);
 }
