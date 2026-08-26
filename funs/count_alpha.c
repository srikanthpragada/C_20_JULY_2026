// Create function that takes a string and returns alpha count

#include <stdio.h>
#include <ctype.h>

int count_alpha(char s[20])
{
   int i, count = 0;

       for(i = 0; s[i] != '\0'; i ++)
       {
           if(isalpha(s[i]))
              count ++;
       }

       return count;
}

void main()
{
  char st[20] = "abc 123 xyz";
  int c;


     c = count_alpha(st);
     printf("%d ",c);

}
