#include<stdio.h>
#define ROWS 5
#define SEATS_PER_ROWS 10
int main()
{
    printf("seating arrangement in theatre \n");
    int t[ROWS][SEATS_PER_ROWS];
    int reserved_seats,row,seats;

    for(int i=0 ; i<ROWS ; i++)
    {
        for(int j=0 ; j<SEATS_PER_ROWS ; j++)
        {
            t[i][j]==0;
        }

    }

    printf("Enter the number of seat reserved:\n");
    scanf("%d",&reserved_seats);


    for(int i=0 ; i<reserved_seats ; i++)
    {
        printf("Enter the row and seat number of the reserved seats e.g(2 3):\n");
        scanf("%d %d",&row,&seats);
        if (row>0 && row<=ROWS && seats>0 && seats<=SEATS_PER_ROWS)
        {
          t[row-1][seats-1]=1;
        }
        else
        {
            printf("invalid row or seat number! please try again!");
            i--;
        }
    }
    printf("\nseating chart\n");
    for(int i=0 ; i<ROWS ;i++)
    {
        printf("ROW %d   ", i+1);
        for(int j=0 ; j<SEATS_PER_ROWS ; j++)
        {
            if(t[i][j]==1)
            {
                printf("X  ");
            }
            else
            {
                printf("0  ");
            }
        }
        printf("\n");
    }

    return 0;
}
