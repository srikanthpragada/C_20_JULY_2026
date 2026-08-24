// Take title with lines before and after

#include <stdio.h>
#include <conio.h>

void drawline(char ch, int len)
{
 int i;

     for(i = 1; i <= len; i ++)
        putch(ch);

}


void main()
{

     drawline('*', 30);  // call function
     printf("\nSrikanth Technologies\n");
     drawline('.', 25);


}
