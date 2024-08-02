 #include <stdio.h>

#define max_len 100

int main() {
    char countryname[max_len];
    char abb[max_len];
    int i, j = 0;

    printf("enter the full name of the country: ");
    fgets(countryname, sizeof(countryname), stdin);

    for (i = 0; countryname[i] != '\0'; i++) {
        if (i == 0 || (countryname[i - 1] == ' ' && countryname[i] != ' ')) {
            abb[j++] = countryname[i];
        }
    }
    abb[j] = '\0';
    printf("The abbreviated form is: %s\n", abb);

    return 0;
}
