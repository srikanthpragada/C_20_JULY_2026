// Create a struct to store details of a rectangle

#include <stdio.h>

struct rect
{
   int length, width;
};

typedef struct rect RECT;


void main()
{
  struct rect r = {10, 20};
  struct rect * pr;
  RECT r2;


    pr = &r;

    printf("%d %d ",r.length, pr -> length);

}
