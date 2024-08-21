#include <stdio.h>

int compare_strings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; 
        }
        str1++;
        str2++;
    }

    return (*str1 == '\0' && *str2 == '\0');
}

void remove_new_line(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char str1[100], str2[100];

    printf("enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
   
    remove_new_line(str1);

    printf("enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
  
    remove_new_line(str2);

    if (compare_strings(str1, str2)) {
        printf("the strings are equal.\n");
    } else {
        printf("the strings are not equal.\n");
    }

    return 0;
}
