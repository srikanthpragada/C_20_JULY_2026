// Create function that takes a number and return true if even otherwise false

#include <stdio.h>

int iseven(int num)
{
   if(num % 2 == 0)
      return 1;
   else
      return 0;
}

void main()
{
   int v;

     v = iseven(10);

     printf("%d ", v);

}
