#include<stdio.h>
int main()
{
    int choice;
    int total=0;
    int first=1;
    printf("Welcome to Foodies Restaurant");
    printf("\nPlease select items from the Menu.");
            printf("\nMenu\n");
    printf("\nPress 1 for Burger Rs - 150 ");
    printf("\npress 2 for Pizza Rs - 200 ");
    printf("\npress 3 for Pasta Rs - 120");
    printf("\npress 4 for Sandwich Rs - 100 ");
    printf("\npress 5 for French Fries Rs - 80");
    printf("\nEnter zero to complete the order.\n");
menu:
    if (first) {
        printf("Please select an item from the menu: ");
        first = 0;  // next time won't be first input
    } else {
        printf("Please select another item from the menu: ");
    }

    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You Ordered Burger.\nYour Sub-Total is Rs %d\n",total+=150);
        break;
    case 2:
        printf("You Ordered Pizza.\nYour Sub-Total is Rs %d\n",total+=200);
        break;
    case 3:
        printf("You Ordered Pasta.\nYour Sub-Total is Rs %d\n",total+=120);
        break;
    case 4:
        printf("You Ordered Sandwich.\nYour Sub-Total is Rs %d\n",total+=100);
        break;
    case 5:
        printf("You Ordered French Fries.\nYour Sub-Total is Rs %d\n",total+=80);
        break;
    case 0:
        printf("Your Order is Completed.\nYour total amount is : Rs %d",total);
        printf("\nThis program is created by:HARDI AGOLA_25TCEBRD");
        return 0;
    default :
        printf("Enter valid option from The Menu\n");
        }
    goto menu;

    //Display the menu
    return 0;
}
