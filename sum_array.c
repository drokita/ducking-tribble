// This program will sum the elements in an array

#include <stdio.h>

int arraySum (int *array, const int n)
{
   int sum = 0;
   int * const arrayEnd = array + n;

// This for loop demonstrates the practive of using pointer comparisons to 
// compare against the length of the array.

   for ( ; array < arrayEnd; ++array)
      sum += *array;

   return sum;
}

int main (void)
{
// Function prototype
   int arraySum (int *array, const int n);
   int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

   printf ("The sum is %i\n", arraySum (values, 10));
   return 0;
}
