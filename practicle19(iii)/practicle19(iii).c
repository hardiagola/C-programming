#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=n ; i>=1 ; i--)
    {
        for(j=n ; j>i ; j--)
            printf(" ");
        for(j=i ; j>=1 ; j--)
            printf("%d",j);
        for(j=2 ; j<=i ; j++)
            printf("%d",j);
        printf("\n");
    }

    for(i=2 ; i<=n ; i++)
    {
        for(j=n ; j>i ; j--)
            printf(" ");
        for(j=i ; j>=1 ; j--)
            printf("%d",j);
        for(j=2 ; j<=i ; j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
