//   Using char

#include <stdio.h>

void main()
{
   char ch,d, i, count = 0;


     for(i=1; i <= 5; i ++)
     {
        printf("Enter char :");
        ch = getchar();

        // Read and ignore enter key
        d = getchar();

        if(ch >= 65 && ch <= 90)
            count ++;
     }

     printf("Count = %d", count);
}
