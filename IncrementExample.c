/**
 * To demonstrate the increment operators in C
 */
#include<stdio.h>
int main ( )
{
   int x = 10; /* For Pre-increment */
   int y = 12; /* For Post-increment */
   /* First increment the value of x  
    * then assigns it to the variable x  
    */
   printf("Pre-incerment : ++x = %d \n", ++x );
   /* The value of the variable y is incremented  
    * after assigning it to the variable y  
    */
   printf("Post-increment : y++ = %d \n", y++ );
   return 0;
}