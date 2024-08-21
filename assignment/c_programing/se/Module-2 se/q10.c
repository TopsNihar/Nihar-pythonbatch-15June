#include <stdio.h>

int main() {
int a,h,l,w,wl,hl,hw;
printf("enter your value: ");
scanf("%d",&h);
printf("enter your value: ");
scanf("%d",&l);
printf("enter your value: ");
scanf("%d",&w);

wl=w*l;
hl=h*l;
hw=h*w;
a=2*(wl+hl+hw);

printf("your area is: %d",a);
   return 0; 
}