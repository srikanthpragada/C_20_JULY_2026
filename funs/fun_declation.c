
#include <stdio.h>

// function declartion
int square(int);

void main()
{
    printf("%d ", square(10)); // call
}

// function definition
int square(int n)
{
  return n * n;
}
