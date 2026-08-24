// Take 5 names and print them in uppercase

#include <stdio.h>
#include <string.h>


void main()
{
  char names[5][20];
  int i;


    for(i = 0; i < 5; i++)
    {
        printf("Enter a name :");
        gets(names[i]);
    }

    for(i = 0; i < 5; i++)
    {
        puts(strupr(names[i]));
    }

}
