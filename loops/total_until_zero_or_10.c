//  Take 10 numbers or until 0 is given and print total

#include <stdio.h>

void main()
{
   int n, i, total = 0;


   for(i = 1;i <= 10; i++)
   {
     printf("Enter a number [0 to stop] :");
     scanf("%d",&n);

     if (n == 0)
        break; // terminate loop

     total = total + n;
   }

   printf("Total = %d", total);

}
