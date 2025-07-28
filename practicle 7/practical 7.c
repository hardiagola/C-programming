#include<stdio.h>

void main()
{
    const int Ticket=250;
    printf("Entry Charges At The Sunrise Amusement Park");
    int age;

    printf("Enter your age:\n");
    scanf("%d",&age);

    payment:(age<=12)?printf("you can enter the park for free.\n"):printf("you have to pay rs %d per head.\n",Ticket);
    int num_of_people;
    printf("Enter the number of people:\n");
    scanf("%d",&num_of_people);
    int Total_amount;
    Total_amount=num_of_people*Ticket;
    printf("you have to pay total rs: %d\n",Total_amount);



}

