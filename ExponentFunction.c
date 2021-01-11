#include <stdio.h>


int inegerPower(int base, int exponent){
 int Answer=0; /* a place holder for the answer*/

for (int  i = 0; i < exponent; i++)  /* what I did is that I took the base num and multiplay it by it self using a for-loop that will go for O(n) where n is the exponent */
{
    Answer = base * base;
}


 return Answer;
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
