#include <stdio.h>

int main (void){ 
   int number,i;
   printf("Please press any key to create a table\nof squares for digits  1 - n\n");
   scanf("%i", &number);
   printf("\n");
   printf("n\t\tn^2\n");
   printf("---\t\t-----------\n");

   for (i = 0; i <= number; ++i){
      printf("%3i\t\t%5i\n", i, i * i);
   }

   return 0;
}
