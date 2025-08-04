#include<stdio.h>
void main()
{
    float totalprice,totalamount,disconut;
    printf("Enter the total price:");
    scanf("%f",&totalprice);
    if(totalprice<1000)
    {
        printf("You will not get any Discount");
        totalamount=totalprice;
        printf("\nThe total amount to pay is: %.2f",totalamount);
    }
    else if(totalprice>=1000 && totalprice<5000)
    {
        disconut=(totalprice*10)/100.0;
        printf("You will recive discount of rupees: %.2f",totalamount);
        totalamount=totalprice - disconut;
        printf("\nThe total amount to pay is: %.2f",totalamount);
    }
    else
    {
        disconut=(totalamount*20)/100.0;
        printf("You will recive discount of rupee: %.2f",disconut);
        totalamount=totalprice - disconut;
        printf("\nThe total amount to pay is: %.2f",totalamount);
    }
}
