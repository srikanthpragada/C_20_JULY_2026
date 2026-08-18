//  Take 5 marks and display only passed marks (>50)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int marks[5];
   int i;

      srand(time(0)); // init seed

      for(i = 0; i < 5; i ++)
      {
          marks[i] = rand()  % 100;
          printf("%d ", marks[i]);
      }


}
