
#include <stdio.h>


void Prime(int RangeA, int RangeB){  /* what I here was to modify the last code so insted of checking for one prime number it will check all the numbers from given rang */ 
 int alert; /* a value to flag the prime numbers*/
 for (int i = RangeA+1; i < RangeB ; ++i) {
     alert = 0;
       
       for(int j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            alert=1;
            break;
         }
      }
      if(alert==0)
         printf("%d\n",i);     /* Print prime numbers  */
    }


}

/*
this function will take two hardcoded numbers and send them to prime function which will print all the prime numbers betweenthem  
*/
void main()
{
  int RangeA, RangeB;

      Prime(1, 10000);

}
