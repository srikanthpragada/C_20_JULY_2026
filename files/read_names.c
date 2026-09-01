// Read file names.txt and display its contents


#include <stdio.h>
#include <conio.h>


void main()
{
  FILE * fp;
  int ch;


      fp =  fopen("names.txt", "rt"); // filename, mode

      while(1)
      {
          ch = fgetc(fp);
          if(ch == EOF)
             break;

          putch(ch);
      }

      fclose(fp);
}
