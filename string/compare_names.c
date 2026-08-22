// Take two names and display the largest

#include <stdio.h>
#include <string.h>

void main()
{
  char n1[20], n2[20];
  int result;


    printf("Enter first name :");
    gets(n1);

    printf("Enter second name :");
    gets(n2);

    result = strcmp(n1, n2);

    if(result > 0)
        puts(n1);
    else
        puts(n2);
}
