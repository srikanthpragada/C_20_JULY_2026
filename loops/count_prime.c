//  Take a number and display whether it is prime

#include <stdio.h>

void main()
{
   int n, i, k, count = 0, prime;

   for(k = 1; k <= 5; k ++)
   {

    printf("Enter a number :");
    scanf("%d",&n);

    prime = 1;

    for(i = 2;i <= n/2; i++)
    {
      if (n % i == 0) // found a factor
      {
          prime = 0;
          break;
      }
    }

    if (prime)
        count ++;

   } // k loop

   printf("Count = %d", count);

}
