// Read content of file given by user and print it with line numbers



#include <stdio.h>
#include <stdlib.h>


void main()
{
  FILE * fp;
  int ch, lineno =1;
  char filename[50], line[100];
  char * p;


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
          p = fgets(line, 100, fp);
          if(p == NULL) // EOF
             break;

          printf("%02d:%s", lineno, line);
          lineno ++;
      }

      fclose(fp);
}
