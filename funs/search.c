// Create function that takes a string and a char and returns the position
// of first occurrence.
// If not found then it returns -1

#include <stdio.h>

int search(char s[20], char ch)
{
  int i;

     for(i = 0; s[i] != '\0'; i ++)
     {
         if (s[i] == ch)
           return i;
     }
     // no found so return -1
     return -1;
}

void main()
{
   char s[20] = "hello";
   int pos;


     pos = search(s, 'a');
     printf("%d ",pos);
}
