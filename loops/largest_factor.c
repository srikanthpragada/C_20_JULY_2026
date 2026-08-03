//  Take a number and display whether it is prime

#include <stdio.h>

void main()
{
   int n, i;


    printf("Enter a number :");
    scanf("%d",&n);

    for(i = n/2;i >= 1; i --)
    {
      if (n % i == 0) // found a factor
      {
          printf("Largest Factor : %d",i);
          break;
      }
    }
}
