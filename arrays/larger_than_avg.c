//  Take an array of 10 elements fill it with random numbers and
//  print numbers that are greater than avg.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10];
   int i, avg, total = 0;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
         a[i] = rand() % 100;
         printf("%d ", a[i]);
         total += a[i];
      }

      avg = total / 10;

      printf("\nAverage : %d\n", avg);

      for(i = 0; i < 10; i ++)
      {
           if (a[i] > avg)
            printf("%d ", a[i]);
      }
}
