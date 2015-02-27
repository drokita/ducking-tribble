/* This is a simple program to display and add triangular numbers */

#include <stdio.h>
#define NUMBER 200 

main () {
  int i, j, score;
  
  score = 0;
  printf("n\t\tSum from 1 to n\n");
  printf("---\t\t--------------\n");
  for ( i = 1 ; i <= NUMBER ; ++i ) {
//     for ( j = i; j >= 1; --j ) {
//        printf("*");
//     }
     score += i;
     printf("%3d\t\t%5d\n", i , score);
//     printf("\n");
  }
//  printf("%d\n", score);
}
 

