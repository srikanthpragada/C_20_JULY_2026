// Create a struct to store details of a rectangle

#include <stdio.h>

struct rect
{
   int length, width;
};


int area(struct rect r)
{
    return r.length * r.width;
}


struct rect max(struct rect r1, struct rect r2)
{
    if (area(r1) > area(r2))
        return r1;
    else
        return r2;
}

void main()
{
  struct rect r;

    printf("Enter length :");
    scanf("%d", &r.length);

    printf("Enter width :");
    scanf("%d", &r.width);

    printf("Length : %d, Width : %d", r.length, r.width);

    printf("Area : %d", area(r));

}
