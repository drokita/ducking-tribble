#include <stdio.h>

int main (void){
     int i, number, score=0;
     printf("Please enter a number that you want to triangulate\n");
     scanf("%i", &number);
     printf("\n");

     for ( i = 1; i <= number; ++i){
        score = i * (i + 1) / 2;
        if (score % 5 == 0 ){
           printf("%2d\t\t%5d\n", i, score);
        }
     
     }
}
