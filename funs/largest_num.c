// Create function that takes an array of 5 ints and returns largest number

#include <stdio.h>

int max(int a[5])
{
   int i, largest = 0;

       for(i = 0; i < 5; i ++)
       {
           if(a[i] > largest)
              largest = a[i];
       }

       return largest;
}

void main()
{
  int a []= {10,22,12,42,2};
  int total;


     total = max(a);
     printf("%d ",total);
}
