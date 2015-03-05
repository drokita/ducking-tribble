#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct list {
   int value;
   struct list *next;
}

insert_entry ()
{
}

int * create_list ()
{
   srand(time(NULL));
   int i;
   for (i=0; i<100; ++i){
      if ( i > 0 ){
         struct list entry[i] = {
            .value = rand();
         }
         entry[i - 1].next = &entry[i];

      }
   }
   return &list;
}

main () 
{
  int * list_start = create_list();
}
