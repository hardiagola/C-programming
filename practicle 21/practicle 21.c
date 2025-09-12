#include<stdio.h>
int main()
{
    int num[25];
    int positive=0;
    int negative=0;
    int odd=0;
    int even=0;
    printf("Enter 25 integers:\n");
    for(int i=1 ; i<25 ; i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0 ; i<25 ; i++)
    {
        if(num[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    for(int i=0 ; i<25 ; i++)
    {
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("____________Data analysis_____________\n");
    printf("Total positive Numbers: %d\n",positive);
    printf("Total negative Numbers: %d\n",negative);
    printf("Total even Numbers: %d\n",even);
    printf("Total odd Numbers: %d\n",odd);
    return 0;
}
