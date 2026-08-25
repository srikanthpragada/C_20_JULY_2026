// Create function that takes a string and returns digit count

#include <stdio.h>
#include <ctype.h>

int gettotal(int a[5])
{
   int i, total = 0;

       for(i = 0; i < 5; i ++)
       {
           total += a[i];
       }
       return total;
}

void main()
{
  int a []= {10,22,12,42,2};
  int total;


     total = gettotal(a);
     printf("%d ",total);
}
