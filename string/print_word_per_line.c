// Take a string and print each word on a separate line

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char s[50];
  int i;


    printf("Enter a string :");
    gets(s);

    for(i = 0;s[i] != '\0'; i ++)
    {
        if(s[i] == ' ')
            putch('\n');
        else
            putch(s[i]);
    }



}
