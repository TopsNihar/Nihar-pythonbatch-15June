#include<stdio.h>
#include<string.h>

int cont(char *str){
    char *word = "is";
    int wotdl = strlen(word);
    int count = 0;

    while((str =strstr(str,word)) != NULL){
        count++;
        str += wotdl;
    }
    return count;
}

int main(){
    char instr[1000];

    printf("enter a string :");
    scanf("%[^\n]", instr);

    instr[strcspn(instr, "\n")] = 0;

    int cuont = cont(instr);

    printf("the word is given %d", cuont);
}