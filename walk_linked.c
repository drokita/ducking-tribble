#include <stdio.h>

int main (void)
{
// Define the structure for a singly linked list
   struct entry
   {
      int value;
      struct entry *next;
   };

// Define instances of the list memebers
   struct entry n1, n2, n3;
// Create an entry point for the first memeber of the linked list
// by creating a pointer to a structure and assigning the address
// of the first memeber of the list

   struct entry *list_pointer = &n1;

   n1.value = 100;
   n1.next = &n2;

   n2.value = 200;
   n2.next = &n3;

   n3.value = 300;
// Identify the end of the list with a null pointer
   n3.next = (struct entry *) 0; 

// (struct entry *) is the cast operator so that 0 is evalated as a null pointer
// rather than an integer

//  The following loop cycles through the item until it reaches the null pointer
//  If list_pointer is null, then the loop exits.  If not, the the value of the 
//  struct that list_pointer is pointing to (struct.value) is printed.
//  Then list_pointer is updated to the next pointer value (struct.next) and
//  The loop is run again.

   while (list_pointer != (struct entry *) 0 ) {
      printf ("%i\n", list_pointer->value);
      list_pointer = list_pointer->next;
   }
   return 0;
}


