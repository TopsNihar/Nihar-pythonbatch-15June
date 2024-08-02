 #include <stdio.h>

#define max_len 100

int main() {
    char fullname[max_len];
    char abb[max_len];
    int i, j = 0;
    
    printf("enter the full name of the school: ");
    fgets(fullname, sizeof(fullname), stdin);
    
    for (i = 0; fullname[i] != '\0'; i++) {
        if (i == 0 || (fullname[i - 1] == ' ' && fullname[i] != ' ')) {
            abb[j++] = fullname[i];
        }
    }
    abb[j] = '\0'; 
    printf("The abbreviated form is: %s\n", abb);

    return 0;
}
