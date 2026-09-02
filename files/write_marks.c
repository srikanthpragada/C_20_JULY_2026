// Create file marks.txt and write marks into file
// Take marks from user until -1 is given


#include <stdio.h>
#include <string.h>


void main()
{
  FILE * fp;
  int marks;


      fp =  fopen("marks.txt", "wt"); // filename, mode

      while(1)
      {
          printf("Enter marks [-1 to stop] :");
          scanf("%d",&marks);

          if(marks == -1)
              break;

          fprintf(fp,"%d\n", marks);
      }


      fclose(fp);

}
