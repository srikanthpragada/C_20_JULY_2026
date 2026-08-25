// Create function that takes 2 numbers and returns the largest

#include <stdio.h>

int max(int a, int b)
{
   if( a > b )
      return a;
   else
      return b;
}

void main()
{
   int b;

     b = max(10, 20);

     printf("%d ", b);

}
