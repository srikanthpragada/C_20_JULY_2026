// Take a string and print it vertically


#include <stdio.h>

void main()
{
  char s[20];
  int i;


    printf("Enter your name :");
    gets(s);

    for(i = 0;s[i] != '\0'; i ++)
        printf("%c\n", s[i]);


}
