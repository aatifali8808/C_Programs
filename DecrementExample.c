/**
 * To demonstrate the decrement operators in C
 */  
#include<stdio.h>
int main ( )
{
   int x = 10; /* For Pre-decrement */
   int y = 12; /* For Post-decrement */
   /* First decrement the value of x  
    * then assigns it to the variable x  
    */
   printf("Pre-decrement : --x = %d \n", --x );
   /* The value of the variable y is decremented  
    * after assigning it to the variable y  
    */
   printf("Post-decrement : y-- = %d \n", y-- );
   return 0;
}