// Function to sum the elements of an integer array

#include <stdio.h>

int arraySum (int array[], const int n)
{
   int sum = 0, *ptr;

// The constant variable arrayEnd is defined prior to the loop to 
// prevent it from being evaluated at each loop.  This is minor
// performance optimization.

   int * const arrayEnd = array + n;

//  The following loop initializes *ptr to the starting address of
//  array.  arrayEnd is calculated above.  ++ptr augments *ptr.
//  Each increment is one full int ememory location.  For example,
//  int = 4 Byte addresses, each increment will be for 4 Bytes
   for (ptr = array; ptr < arrayEnd; ++ptr )
//  This expression adds the value stored at each int pointer      
      sum += *ptr;

   return sum;
}

int main (void)
{
   int arraySum (int array[], const int n);
   int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

   printf ("The sum is %i\n", arraySum (values, 10));

   return 0;
}
