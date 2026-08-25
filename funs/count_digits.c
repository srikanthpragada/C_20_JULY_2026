// Create function that takes a string and returns digit count

#include <stdio.h>
#include <ctype.h>

int count_digits(char s[20])
{
   int i, count = 0;

       for(i = 0; s[i] != '\0'; i ++)
       {
           if(isdigit(s[i]))
              count ++;
       }

       return count;
}

void main()
{
  char st[20] = "abc 123 xyz";
  int c;


     c = count_digits(st);
     printf("%d ",c);

}
