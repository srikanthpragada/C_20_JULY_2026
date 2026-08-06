//  Take a char and print it in opposite case

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch;

      printf("\nEnter char :");
      ch = getch();


      if(isupper(ch))
         putch(tolower(ch));
      else
         putch(toupper(ch));


}
