//  Print odd numbers from 1 to given number

#include <stdio.h>

void main()
{
   int n, i;

     printf("Enter a number :");
     scanf("%d",&n);

     for(i = 1; i <= n; i +=2)
     {
        printf("%d ", i);
     }

}
