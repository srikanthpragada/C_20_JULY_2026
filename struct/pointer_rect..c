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
int equals(struct rect r1, struct rect r2)
{
    if (r1.length == r2.length && r1.width == r2.width)
        return 1;
    else
        return 0;
}

// Returns 0, > 0 or < 0
int compare(struct rect r1, struct rect r2)
{
 int r;

    r = area(r1) - area(r2);

    return r;
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
