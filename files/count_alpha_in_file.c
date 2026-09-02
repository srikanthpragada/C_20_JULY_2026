// Read file names.txt and display how many alphabets are there


#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>


void main()
{
  FILE * fp;
  int ch, count = 0;
  char filename[50];

      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename, "rt"); // filename, mode
      if(fp == NULL)  // open failed
      {
          printf("Sorry! Could not open file!");
          exit(1);
      }

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
