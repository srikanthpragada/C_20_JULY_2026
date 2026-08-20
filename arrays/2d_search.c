//  Take 5X5 array and fill it with random numbers and search for a value

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int a[5][5];
   int i, j, sn, found = 0;

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

      printf("Enter search number :");
      scanf("%d",&sn);


      for(i = 0; i < 5 && !found; i ++)
      {
          for(j = 0; j < 5; j ++)
          {
              if(a[i][j] == sn)
              {
                  printf("Found %d, %d\n", i,j);
                  found = 1;
                  break;
              }
          }

          /*
            if(found)
              break; // terminate outer loop
          */
      }

      if(!found)
        printf("Number not found!");

}
