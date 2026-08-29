// Create a struct to store details of a course
#include <stdio.h>

struct course
{
   char name[20];
   int duration, fee;
};


void main()
{
  struct course c;
  struct course nc = {"Gen AI", 24, 10000};


    printf("Enter name     :");
    gets(c.name);

    printf("Enter duration :");
    scanf("%d", &c.duration);

    printf("Enter fee      :");
    scanf("%d", &c.fee);


    printf("Name : %s\nDuration : %d\nCourse Fee :%d\n",
             c.name, c.duration, c.fee + c.fee * 12 / 100);

}
