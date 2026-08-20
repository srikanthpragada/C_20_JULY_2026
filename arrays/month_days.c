//  Display days for the given month using an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
   int month;

      printf("Enter month number :");
      scanf("%d",&month);

      printf("No. of days : %d", days[month - 1]);
}
