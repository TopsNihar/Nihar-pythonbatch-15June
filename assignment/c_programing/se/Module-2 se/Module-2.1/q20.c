#include <stdio.h>

int main() {
    int customerid;
    char name[100];
    float unitsconsumed, totalamount, surcharge, finalamount;

    printf("enter customer id: ");
    scanf("%d", &customerid);

    printf("enter customer name: ");
    scanf(" %s", name); 
    
    printf("enter units consumed: ");
    scanf("%f", &unitsconsumed);

    if (unitsconsumed <= 350) {
        totalamount = unitsconsumed * 1.20;
    } 
    else if (unitsconsumed > 350 && unitsconsumed < 600) {
        totalamount = unitsconsumed * 1.50;
    } 
    else if (unitsconsumed >= 600 && unitsconsumed < 800) {
        totalamount = unitsconsumed * 1.80;
    }
     else {
        totalamount = unitsconsumed * 2.00;
    }

    if (totalamount > 800) {
        surcharge = totalamount * 0.18;
        finalamount = totalamount + surcharge;
    } 
    else {
        finalamount = totalamount;
    }

    if (finalamount < 256) {
        finalamount = 256;
    }

    printf("\nelectricity bill\n");
    printf("customer id: %d\n", customerid);
    printf("customer name: %s\n", name);
    printf("units consumed: %.2f\n", unitsconsumed);
    printf("total amount (before surcharge): %.2f\n", totalamount);
    printf("surcharge: %.2f\n", (totalamount > 800) ? surcharge : 0.0);
    printf("final amount to be paid: %.2f\n", finalamount);

    return 0;
}

