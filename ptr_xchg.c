#include <stdio.h>

// The purpose of this program is to switch the values of 
// of two variables.  The difference is subtle, but the
// pointer is constant, so it always has to point to its
// defined variable, but you  can exchange the values.


// Function to exchange the values of two variables
void exchange (int * const pint1, int * const pint2)
{
   int temp;
   temp = *pint1;
   *pint1 = *pint2;
   *pint2 = temp;

}

int main (void)
{
// Prototype of exchange function
   void exchange (int * const pint1, int * const pint2);
   
   int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

   printf ("i1 = %i, i2 = %i\n", i1, i2);

   exchange (p1, p2);
   printf ("i1 = %i, i2 = %i\n", i1, i2);

   exchange (&i1, &i2);
   printf ("i1 = %i, i2 = %i\n", i1, i2);

   return 0;
}
