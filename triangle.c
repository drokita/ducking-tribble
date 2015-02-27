/* This is a simple program to display and add triangular numbers */

#include <stdio.h>
#define NUMBER 200 

main () {
  int i, j, score;
  
  score = 0;

  for ( i = 1 ; i <= NUMBER ; ++i ) {
     for ( j = i; j >= 1; --j ) {
        printf("*");
     }
     score += i;
     printf("\n");
  }
  printf("%d\n", score);
}
 

