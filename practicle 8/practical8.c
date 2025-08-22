#include<stdio.h>
int main()
{
    int choice,age,i;

    for(i=0;i<100;i++)
    {

    printf("1. Check Eligibility \n");
    printf("2. Exit \n");
    printf("Enter your choice (1 or 2) : ");
    scanf("%d", &choice);

    printf("-------------------------------- \n");

    if(choice==1)
    {
        printf("Enter you Age = ");
        scanf("%d", &age);

        if(age<0 || age>120)
        {
            printf("INVALID AGE");
        }

        else
        {
            if(age<18)
            {
                printf("Sorry, you are not eligible for opening saving account");
            }
            else if(age>=60)
            {
                printf("You are eligible for opening senior citizen account");
            }
            else
            {
                printf("You are eligible for opening saving account");
            }
        }
    }

    else if(choice==2)
    {
        printf("THANK YOU for using eligibility checker");
        break;
    }


   }
    return 0;
}
