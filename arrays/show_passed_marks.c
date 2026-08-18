//  Take 5 marks and display only passed marks (>50)

#include <stdio.h>

void main()
{
   int marks[5];
   int i;

      for(i = 0; i < 5; i ++)
      {
          printf("Enter marks for %d student :",i + 1);
          scanf("%d", &marks[i]);
      }

      printf("\n\n");

      for(i = 0; i < 5; i ++)
      {
          if(marks[i] > 50)
              printf("%d ", marks[i]);
      }
}
