#include<stdio.h>
#include<unistd.h>
int main()
{
    int seconds;
    printf("Enter the number of seconds you want to countdown:\n");
    scanf("%d",&seconds);

    for(int i= seconds ; i>=0 ; i--)
    {
        sleep(1);
        printf("%d\n\a",i);
    }
    printf("countdown completed!");
    return 0;
}
