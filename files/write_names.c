// Create file names.txt and write names into file
// Take names from user until end is given


#include <stdio.h>
#include <string.h>


void main()
{
  FILE * fp;
  char name[20];


      fp =  fopen("names.txt", "wt"); // filename, mode

      while(1)
      {
          printf("Enter name [end to stop] :");
          gets(name);

          if(stricmp(name, "end") == 0)
              break;

          // write name into file
          fputs(name,fp);
          fputc('\n',fp);
      }


      fclose(fp);

}
