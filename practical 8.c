#include<stdio.h>
void main()
{
    printf("Information for Sparks Saving Account. ");
    int age;
    printf("\nEnter customer's age:");
    scanf("%d",&age);
    if (age<=18)
        printf("You are not  eligible to create an account.");
    else if (age>=18 && age<=59)
        printf("you are  Eligible for Regular Savings.");
    else
        printf("You are  Eligible for Senior Citizen Account.");
}

