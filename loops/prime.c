//  Take a number and display whether it is prime

#include <stdio.h>

void main()
{
   int n, i;


    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;i <= n/2; i++)
    {
      if (n % i == 0) // found a factor
      {
          printf("Not prime as it has %d as a factor",i);
          break;
      }
    }

    if (i > n/2)
        printf("Prime number!");



}
