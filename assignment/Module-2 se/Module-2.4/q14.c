#include <stdio.h>
#include<string.h>
void combineStr(char *dest, const char *src)
{
    while (*dest){
        dest++;
    }
    while (*src){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main(){
    char str1[100], str2[50];

    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    combineStr(str1, str2);
    printf("combine string: %s\n", str1);

}
