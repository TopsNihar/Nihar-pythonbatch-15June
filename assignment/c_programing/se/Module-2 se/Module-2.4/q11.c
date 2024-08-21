#include<stdio.h>
#include<ctype.h>

void tcase(char centence[]){
   int i = 0;
    while(centence[i] != '\0'){
        if(isupper(centence[i])){
            centence[i] = toupper(centence[i]); 
        }
        else if(isupper(centence[i])){
            centence[i] = tolower(centence[i]);
        }
        i++;
    }
}
int main(){
    char centence[100];

    printf("enter a centence");
    scanf("%[^\n]", centence);

    tcase(centence);

    printf("centence is %s", centence);
}