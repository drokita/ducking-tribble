#include <stdio.h>

int main (void){
   struct biscuits {
   int butter;
   int bread;
   };

   struct biscuits buttery = {67, 88};

   printf ("%i", buttery.butter);
   return 1;
}
