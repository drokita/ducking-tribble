#include <stdio.h>

int main (void){
   int number, j ,i; 
   unsigned long fact;
   printf("Please enter the number that you want to factorial: \n");
   scanf("%i",&number);
   for ( j = number; j >=1; --j ){
      fact = j;
      for ( i = j; i >= 1; --i ){
//     printf("%d",i);
         if ( i > 1){
            fact = fact * (i - 1); 
         }
      }     

   
      printf("The factorial of %i is:\t\t%-20lu\n", j, fact);
      
   }
   return 0;

}
