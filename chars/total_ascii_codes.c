//   Using char

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
   char ch,i;
   int total = 0;


     for(i=1; i <= 5; i ++)
     {
        printf("\nEnter char :");
        ch = getche();

        total += ch;
     }

     printf("\nTotal = %d", total);
}
