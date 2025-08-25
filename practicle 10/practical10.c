#include<stdio.h>

int main()
{
    int choice,qty;             //qty=quantity
    int total=0,dis=0;          //dis=discount
    char *items[5]={"Burger","Pizza","Pasta","Sandwich","French Fries"};
    int item_count[5]={0};
    int price[5]={150,200,120,100,80};      //no " because variable type is integer not string

        // To display the menu

    printf("...WELCOM TO FOODIES RESTUARANT... \n");
    printf("         MENU : \n");
    printf("1.Burger        - Rs. 150 \n");
    printf("2.Pizza         - Rs. 200 \n");
    printf("3.Pasta         - Rs. 120 \n");
    printf("4.Sandwich      - Rs. 100 \n");
    printf("5.French Fries  - Rs. 80 \n");
    printf("Enter 0 to finish the order \n");

        //Start loop to place the order

    while(1)
    {
        printf("Enter your choice and press 0 to finish the order : ");
        scanf("%d", &choice);

        if(choice==0)
            break;

        switch (choice)
        {
        case 1: case 2: case 3: case 4: case 5:
            printf("Enter the quantity : ");
            scanf("%d", &qty);

            item_count[choice-1] += qty;
            total += price[choice-1] * qty;
            break;

            default:
            printf("Invalid choice. Please select a valid option from the menu. \n");
        }
    }

            //To apply the discount if total>rs.500

        if(total>500)
        {
            dis=total*0.05;      //discount=5%

            total-=dis;
        }

            //To generate the bill summary

        printf("\n    ...Order Summary... \n");
        printf("Item \t\t Quantity \t\t Price \t\t Total \n");

        for(int i=0;i<5;i++)
        {
            if(item_count[i]>0)
            {
                printf("%-12s  \t %d  \t\t\t Rs. %d \t Rs. %d \n", items[i], item_count[i], price[i], price[i]*item_count[i]);
            }
        }

        if(dis>0)
        {
            printf("\n Discount applied : Rs. %d \n", dis);
        }

        printf("Final Amount to pay : Rs. %d \n", total);
        printf("THANK YOU VISITING");

        return 0;
}
