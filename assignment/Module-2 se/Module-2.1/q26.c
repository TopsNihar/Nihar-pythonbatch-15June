 #include <stdio.h>

int main() {
    float unitsconsumed, totalbill, surcharge, finalbill;

    printf("enter the units consumed: ");
    scanf("%f", &unitsconsumed);

    totalbill = 0.0;

    if (unitsconsumed <= 50) {
        totalbill = unitsconsumed * 0.50;
    } 
    else if (unitsconsumed <= 150) {
        totalbill = (50 * 0.50) + ((unitsconsumed - 50) * 0.75);
    }
     else if (unitsconsumed <= 250) {
        totalbill = (50 * 0.50) + (100 * 0.75) + ((unitsconsumed - 150) * 1.20);
    }
     else {
        totalbill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unitsconsumed - 250) * 1.50);
    }

    surcharge = totalbill * 0.20;
    
    finalbill = totalbill + surcharge;

    printf("total bill : %.2f\n", totalbill);
    printf("surcharge: %.2f\n", surcharge);
    printf("final bill amount: %.2f\n", finalbill);

    return 0;
}

