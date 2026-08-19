//  Take an array of 10 elements fill it with random numbers and count how many
//  times a given number is present

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[10];
   int i, sn , count = 0;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
         a[i] = rand() % 100;
         printf("%d ", a[i]);
      }

      printf("\nEnter a number :");
      scanf("%d", &sn);

      for(i = 0; i < 10; i ++)
      {
          if(a[i] == sn)
            count ++;
      }

      printf("\nCount = %d", count);
}
