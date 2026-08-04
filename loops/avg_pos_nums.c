//  Take numbers until 0 is given and display avg of positive numbers


#include <stdio.h>

void main()
{
   int n, i, total = 0;
   float count = 0;

    while(1)
    {

        printf("Enter a number[0 to stop] :");
        scanf("%d",&n);

        if(n == 0)
            break;

        if(n < 0)
            continue;

        total += n;
        count ++;
    }

    printf("Average : %.2f", total / count);



}
