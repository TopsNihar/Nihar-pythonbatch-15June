 #include <stdio.h>

int main() {
    float temp;

    printf("enter the temperature in celsius: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("freezing weather\n");
    } 
    else if (temp >= 0 && temp < 10) 
    {
        printf("very cold weather\n");
    } 
    
    else if (temp >= 10 && temp < 20) {
        printf("cold weather\n");
    } 
    else if (temp >= 20 && temp < 30) {
        printf("normal in temp\n");
    } 
    else if (temp >= 30 && temp < 40) {
        printf("it's hot\n");
    } 
    else { 
        printf("it's very hot\n");
    }

    return 0;
}
