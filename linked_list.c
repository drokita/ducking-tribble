// Funtion to create linked lists

#include <stdio.h>

int main (void)
{

// Create the struct for a singly linked list
   struct entry
   {
      int value;
      struct entry *next;
   };
// Declare structure instances
   struct entry n1, n2, n3;
   int i;

// Assign values to structure instances
   n1.value = 100;
   n2.value = 200;
   n3.value = 300;

   n1.next = &n2;
   n2.next = &n3;

// The following line essentially says i = the 'value' parameter 
//held in the structure instance that is pointed to by n1.next
  
  i = n1.next->value;
   printf ("%i ", i);
   printf ("%i\n", n2.next->value);
   return 0;
}
