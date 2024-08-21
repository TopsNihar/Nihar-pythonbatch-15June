#include <stdio.h>

int main() {
    char ch;
    
    printf("enter your choise alphabet digit or sp character:");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("'%c'this is a uppercase latter",ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("'%c'this is lowercase latter",ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("'%c'this is digit",ch);
    }
    else{
        printf("this is a special character");
    }
    
    return 0;
}