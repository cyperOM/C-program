#include <stdio.h>
int main() {

int r1,r2;
float pi=3.142,A;
printf("\nEnter the radius of the small region:");
scanf(" %d",&r1);
printf("\nEnter the radius of the big region:");
scanf(" %d",&r2);
A=(pir2r2-pir1r1)/4;
printf("\nThe Area is=%f",A);
return 0;

}