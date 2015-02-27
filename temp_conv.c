/* This is a simple temperature converter */


#include <stdio.h>
main(){
   int i;
   float celsius;
   int temps[7]={30,40,50,60,65,79,90};
   for ( i = 0; i <= 6; i++ ){
      celsius = (temps[i] - 32) / 1.8;
      printf("%d F is %f C\n", temps[i], celsius);
   }
}
