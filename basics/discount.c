// Take a price and display discount @10%

#include <stdio.h>

void main()
{
  int price, discount; // declare variables


    printf("Enter a price :");
    scanf("%d", &price);

    discount = price * 10 / 100;

    printf("Discount = %d", discount);

}
