// Create a struct to store details of a rectangle

#include <stdio.h>

// 1 - cash, 2 - upi, 3 - card

enum paymentmode
{
    CASH, UPI, CARD
};


void main()
{
   enum paymentmode pm;


     pm = CARD;

     if(pm == CASH)
         printf("Processing cash payment");
     else
        if(pm == CARD)
           ;

}
