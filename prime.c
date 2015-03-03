#include <stdio.h>

int main(void){
   int i, j, count;
   printf("2 is prime");
   count = 1;
   for (i = 3; i <= 1000000; i += 2){
      for ( j = 2; j <= i; j++ ) {
         if ( i % j == 0 ){
            count += 1;
         }
         if ( count > 2){
            break;
         }

   }
//      printf("%d\n",count);
      if ( count <= 2 ){
         printf("%10d is prime\n", i);
         count = 1;
      }
      count = 1;
   }   
   return 0;
}
