#include<stdio.h>
int main()
{
    int v,h,n;
    printf("Table printing.\n");
    printf("Enter the size of the table verticaly:\n");
    scanf("%d",&v);
    printf("Enter the size of the table horizontally:\n");
    scanf("%d",&h);
    printf("Multiplication table: %d * %d\n",v,h);

    for(int i=1 ; i<=v ; i++)
    {
        for(int j=1 ; j<=h ; j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
    return 0;
}
