#include <stdio.h>

struct entry
{
   int value;
   struct entry *next;
};

// The following function defintion create a function
// called findEntry that returns a pointer to a struct
// of type entry 
struct entry *findEntry (struct entry *listPtr, int match)
{
// The following loop will roll through the linked list
// until reaching the null pointer.  This demonstrates the
// cast of '0' as type 'struct entry'.  This allows the '0' 
// to be evaluated as the null pointer rather than the char '0'
   while (listPtr != (struct entry *) 0)
      if (listPtr->value == match)
         return (listPtr);
      else
         listPtr = listPtr->next;
   
   // Return the null pointer at the conclusion of the linked list
   return (struct entry *) 0;
}

int main (void)
{
// Prototype findEntry
   struct entry *findEntry (struct entry *listPtr, int match);
   struct entry n1, n2, n3;
   struct entry *listPtr, *listStart = &n1;

   int search;

   n1.value = 100;
   n1.next = &n2;
   
   n2.value = 200;
   n2.next = &n3;

   n3.value = 300;
   n3.next = 0;

   printf("Enter value to locate: ");
   scanf ("%i", &search);

   listPtr = findEntry (listStart, search);

   if (listPtr != (struct entry *) 0)
      printf ("Found %i.\n", listPtr->value);
   else
      printf ("Not found.\n");

   return 0;
}

