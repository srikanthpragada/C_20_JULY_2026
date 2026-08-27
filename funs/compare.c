// Create function that takes two int arrays and compare them

#include <stdio.h>

int compare(int a[5], int b[5])
{
  int i;

     for(i = 0; i < 5; i++)
     {
         if(a[i] != b[i])
             return 0; // False
     }

     return 1; // True
}

void main()
{
   int a1[] = {1,2,3,4,5};
   int a2[] = {1,2,3,4,5};
   int r;


     r = compare(a1, a2);
     printf("%d ", r);
}

