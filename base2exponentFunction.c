#include <stdio.h>


int inegerPower(int base, int exponent){   /*my idea here is to see if the exponent is 0 if it is then go back else multiply the base by itself and exponent-1 then pass it along the function this will only take O(1) */
 if (exponent != 0)
        return (base * inegerPower(base, exponent - 1));
    else
        return 1;

}


/*
this function will ask the user to enter both the base and the exponent and then send it to the power function 
*/
void main()
{

  int ans,a,b;
printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);  
     ans = inegerPower(a,b);
   printf("\n the answer is  : %d \n",ans);
}
