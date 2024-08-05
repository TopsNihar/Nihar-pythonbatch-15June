#include<stdio.h>
#include<ctype.h>

void cvowel(char str[]){

    int v = 0, c = 0 , i = 0;
    char ch;

    while(str[i] != '\0'){

        ch = tolower(str[i]);

        if(isalpha(ch)){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }
            else{
                c++;
            }
        }
        i++;
    }

    printf("Total vowels: %d\n", v);
    printf("Total consonants: %d\n", c);
}

int main(){
    char str[100];

    printf("enter a string:");
    scanf("%[^\n]", str);

    cvowel(str);
}