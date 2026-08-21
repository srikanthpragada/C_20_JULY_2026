// Take a string and replace all spaces with stars


#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char s[20];
  int i;


    printf("Enter a string :");
    gets(s);

    for(i = 0;s[i] != '\0'; i ++)
    {
        if (s[i] == ' ')
            s[i] = '*';
    }

    puts(s);
}
