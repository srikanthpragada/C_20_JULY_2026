//  Take 8 chars and print whether it is valid password
//  Valid password should have 1 uppercase, 1 digit

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch;
   int i, digit = 0, upper = 0;


      printf("Enter Password :");

      for(i = 1; i <= 8; i ++)
      {
         ch = getch();
         putch('*');

         if(isdigit(ch))
             digit = 1;
         else
           if(isupper(ch))
               upper = 1;
      }


      if(!digit)
         printf("\nDigit is missing!");

      if(!upper)
         printf("\nUpper is missing!");

      if(digit && upper)
         printf("\nValid Password!");


}
