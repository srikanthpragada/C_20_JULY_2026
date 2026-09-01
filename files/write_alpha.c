// Create file alpha.txt and write alphabets

#include <stdio.h>


void main()
{
  FILE * fp;
  char ch;


      fp =  fopen("alpha.txt", "wt"); // filename, mode

      // write

      for(ch = 'a'; ch <= 'z'; ch ++)
      {
          fputc(ch,fp);  // write a char
      }


      fclose(fp);

}
