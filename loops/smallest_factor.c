//  Take a number and display its smallest factor

#include <stdio.h>

void main()
{
   int n, i, found = 0;


    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;i <= n/2; i ++)
    {
      if (n % i == 0) // found a factor
      {
          printf("Smallest Factor : %d",i);
          found = 1;
          break;
      }
    }

    if(!found)
        printf("Smallest Factor :%d", n);
}
