#include <stdio.h>
// The purpose of this program is to create a function that
// takes a pointer as a parameter.  The function then users
// the pointer to change the value that the pointer points to
// This allows the function to change a variable that was
// created out of scope from the function.

// This is a function that receives a pointer as a parameter
void test (int * int_pointer)
{
   *int_pointer = 100;
}

int main (void)
{

// Function prototype
   void test (int *int_pointer);
 
// i is set to 50 and *p is create as a pointer to i
   int i = 50, *p = &i;

   printf ("Before the call to test i = %i\n", i);
   test (p);
   printf ("After the call to test i = %i\n", i);

   return 0;
}
