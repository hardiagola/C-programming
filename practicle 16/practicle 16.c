#include<stdio.h>
int main()
{
    int matchsticks=21, user_pick, com_pick;
    printf("Welcome to the Matchstick Game!\n");
    printf("Rules:\n");
    printf("1.The game starts with 21 matchsticks.\n");
    printf("2.You can pick 1,2,3 or 4 matchsticks on your turn.\n");
    printf("3.Then computer will pick matchsticks.\n");
    printf("4.The player who is forced to pick the last matchstick loses the game!\n");

    while(matchsticks>1)
    {
        printf("Matchsticks left:%d\n",matchsticks);
        printf("Your turn! Pick 1,2,3 or 4 matchstick(s)!");
        scanf("%d",&user_pick);
        if(user_pick <1 || user_pick >4 || user_pick > matchsticks)
        {
            printf("Invalid choice! Please try again!");
        }
        else
        {
            matchsticks-=user_pick;


            com_pick = 5 - user_pick;
            printf("Computer picks %d matchsticks!\n",com_pick);

            matchsticks-=com_pick;

              if(matchsticks==1)
            {
                printf("\nOnly one matchstick left! You loose,computer wins!");
                return 0;
            }
        }
    }

    return 0;
}
