//  Print 1s in diagonal and anti-diagonal and 0 in the remaining

#include <stdio.h>

void main()
{
   int i,j;

      for(i = 1; i <= 5; i ++)
      {
          for(j = 1; j <= 5; j ++)
          {

             if(i == j || i + j == 6) // Diagonal & Anti-diagonal
                printf("1 ");
             else
                printf("0 ");
          }

          printf("\n");
      }

}
