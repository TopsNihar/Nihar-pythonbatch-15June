#include <stdio.h>

int main() {
    char vowel;
     printf("enter the vowel: ");
     scanf("%c",&vowel);

     switch(vowel){
        case 1:
        printf("a");
        break;
        case 2:
        printf("e");
        break;
        case 3:
        printf("i");
        break;
        case 4:
        printf("o");
        break;
        case 5:
        printf("u");
        break;
        case 6:
        printf("A");
        break;
        case 7:
        printf("E");
        break;
        case 8:
        printf("I");
        break;
        case 9:
        printf("O");
        break;
        case 10:
        printf("U");
        break;
        default:
            printf("input is invalid");
        }
            
        
    return 0;
}