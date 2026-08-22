// Take two names and display the largest

#include <stdio.h>
#include <string.h>

void main()
{
  char name[20], largest[20] = "";
  int i;

    for(i = 1; i <= 5; i ++)
    {
      printf("Enter name :");
      gets(name);

      if (strcmp(name, largest) > 0)
          strcpy(largest, name);
    }

    printf("Largest name = %s", largest);

}
