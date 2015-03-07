// Version 2 of the array summation program

#include <stdio.h>

int arraySum (int *array, const int n)
{
   int sum = 0;
   int * const arrayEnd = array + n;

   for ( ; array < arrayEnd; ++array )
      sum += *array;

   return sum;
}

int main (void)
{
// Prototype
   int arraySum(int *array, const int n);
   int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

// Even though in the function call I am passing the array 'values'
// Since the function expects a pointer, it interprets the array
// parmeter as a pointer.  Essentially these are interchangeable.
   printf ("The sum is %i\n", arraySum(values, 10));

   return 0;

}
