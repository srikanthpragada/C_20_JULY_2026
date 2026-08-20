//  Take 5X5 array and fill it with random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[5][5];
   int i, j;

      srand(time(0)); // init seed

      for(i = 0; i < 5; i ++)
      {

          for(j = 0; j < 5; j ++)
          {

              a[i][j] = rand() % 100;
              printf("%5d", a[i][j]);
          }

          printf("\n");
      }

      printf("\n\n");

      for(i = 0; i < 5; i ++)
      {

          for(j = 0; j < 5; j ++)
          {
            if(a[i][j] > 50)
                printf("%d ", a[i][j]);
          }

      }

}
