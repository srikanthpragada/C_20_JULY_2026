// Take a string and print it in reverse order

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char s[50];
  int i;


    printf("Enter a string :");
    gets(s);

    for(i = 0;s[i] != '\0'; i ++);


    for(i --; i >= 0; i --)
        putch(s[i]);



}
