// Read file names.txt and display how many alphabets are there


#include <stdio.h>
#include <conio.h>
#include <ctype.h>


void main()
{
  FILE * fp;
  int ch, count = 0;


      fp =  fopen("names.txt", "rt"); // filename, mode

      while(1)
      {
          ch = fgetc(fp);
          if(ch == EOF)
             break;

          if(isalpha(ch))
             count ++;
      }

      fclose(fp);
      printf("Alpha Count = %d", count);
}
