#include <stdio.h>

// The following struct definition creates a single linked list
struct entry 
{
   int value;
   struct entry * next;
};

// The following create a function that returns a struct and takes 
// a point to a struct and an integer as parameters
// This function will tranverse the linked list and look for a value
// match.  If it finds one, it will return the pointer to the list.
// If it doesn't, it will return a Null Pointer to indicate the end
// of the list.

struct entry *findEntry (struct entry *listPtr, int match)
{
   while ( listPtr != (struct entry * ) 0)
      if ( listPtr->value == match )
         return (listPtr);
      else
         listPtr = listPtr->next;
   return (struct entry *) 0;
}

int main (void)
{
// Function prototype
   struct entry *findentry (struct entry *listPtr, int match);
// Create 3 empty structures
   struct entry n1, n2, n3;
// Create pointers to list and list start. listStart points to the first item
// in the list
   struct entry *listPtr, *listStart = &n1;
   
   int search;
   
// Assign values to the list
   n1.value = 100;
   n1.next = &n2;

   n2.value = 200;
   n2.next = &n3;

   n3.value = 300;
   n3.next = 0;

// Obtain search parameters
   printf ("Enter value to locate: ");
   scanf ("%i", &search);

   listPtr = findEntry (listStart, search);

   if ( listPtr != (struct entry *) 0 )
      printf ("Found %i.\n", listPtr->value);
   else
      printf ("Not found.\n");
 
   return 0;
}





