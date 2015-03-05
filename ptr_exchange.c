#include <stdio.h>

// Creates a function called exchange that takes 2 constant pointers
// as stated, these pointers will not change for the duration of
// the program, but it is still possible that the value that they point
// to may change.
void exchange (int * const pint1, int * const pint2)
{
   int temp;
   temp = *pint1;
   *pint1 = *pint2;
   *pint2 = temp;
}

int main (void)
{
// The following line is a prototype for the aformentioned function
   void echange (int * const point1, int * const pint2);

// The following line creates 2 variables and subsequently creates pointers
// to those variables
   int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
   printf ("i1 = %i, i2 = %i\n", i1, i2);

// Call the function while sending the pointers as parameters
   exchange (p1, p2);
   printf ("i1 = %i, i2 = %i\n", i1, i2);

   exchange (&i1, &i2);
   printf ("i1 = %i, i2 = %i\n", i1, i2);

   return 0;
}
