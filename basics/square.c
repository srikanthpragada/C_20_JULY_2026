// Take a number and display its square

#include <stdio.h>

void main()
{
  int num, square; // declare variables


    printf("Enter a number :");
    scanf("%d", &num);

    square = num * num;

    printf("Square of %d is %d", num, square);

}
