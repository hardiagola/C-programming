#include<stdio.h>
int main()
{
    int Balance=5000;
    int withdraw,choice;
    printf("Welcome to National Bank Of Bharat ATM\n");
    printf("Your starting Balance is: %d\n",Balance);
    while(1)
    {


        printf("\nEnter the amount to withdraw:");
        scanf("%d",&withdraw);

        if (withdraw<=Balance)
        {
            Balance-=withdraw;
            printf("\nTranscation successful!\n");
            printf("\nRemaining Balance: %d\n",Balance);
        }
        else
        {
            printf("insufficient balance!\n");
        }
        printf("\nDo you want to Coutinue? 1=Yes,0=No");
        scanf("%d",&choice);
        if(choice==0)
        {
            printf("\nThank you! Visit again!!");
            break;
        }
        else
            continue;
    }
    return 0;
}
