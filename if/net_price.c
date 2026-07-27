// Take a price and display net price after a discount based on price

#include <stdio.h>

void main()
{
  int price, discount, net_price; // declare variables


    printf("Enter a price :");
    scanf("%d", &price);


    if(price > 10000)
        discount = price * 20 / 100;
    else
        if(price > 5000)
            discount = price * 10 / 100;
        else
            discount = price * 5 / 100;

    net_price = price - discount;

    printf("Price      : %6d\n", price);
    printf("- Discount : %6d\n", discount);
    printf("Net Price  : %6d", net_price);

}
