// Take a string and print word count

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char s[50];
  int i, count = 1;


    printf("Enter a string :");
    gets(s);

    for(i = 0;s[i] != '\0'; i ++)
    {
        if(s[i] == ' ')
            count ++;
    }

    printf("Count = %d", count);

}
