//  Take a number and print whether it is perfect

#include <stdio.h>

void main()
{
   int n, i, total = 1;


    printf("Enter a number :");
    scanf("%d",&n);

    for(i = 2;i <= n/2; i++)
    {
      if (n % i == 0)
          total += i;
    }

    if(total == n)
        printf("Perfect!");
    else
        printf("Not a perfect!");

}
