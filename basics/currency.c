// Take a USD and display INR and AUD

#include <stdio.h>

void main()
{
  float usd, inr, aud;


    printf("Enter USD :");
    scanf("%f", &usd);

    inr = usd * 95.5;
    aud = usd * 1.43;

    printf("USD %8.2f = INR %8.2f\n", usd,inr);
    printf("USD %8.2f = AUD %8.2f\n", usd,aud);
}
