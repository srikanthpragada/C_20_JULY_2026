//  Store 5 rates in an array

#include <stdio.h>

void main()
{
   int rates[5];
   int i;

      for(i = 0; i < 5; i ++)
      {
          printf("Enter rate for %d product :",i + 1);
          scanf("%d", &rates[i]);
      }

      printf("\n\n");

      for(i = 0; i < 5; i ++)
      {
          printf("%d ", rates[i]);
      }

}
