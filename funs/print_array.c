#include <stdio.h>


void print_array(int a[], int len)
{
 int i;

   for(i = 0; i < len; i ++)
       printf("%d ", a[i]);
}

void main()
{
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {11,22,33,44,55,66,77,88,99,100};

     print_array(arr1, 5);
     print_array(arr2, 10);
     print_array(arr2, 5);
}
