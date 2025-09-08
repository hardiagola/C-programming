#include<stdio.h>
int main()
{
    int N;
    printf("Enter the total no. of participants:");
    scanf("%d",&N);

    int p[N-1];
    printf("Enter the %d participant's ID:\n",N-1);

    for(int i=0 ; i < N-1 ; i++ )
    {
        scanf("%d",&p[i]);
    }
    int p_sum= N * (N + 1) / 2;

    int sum=0;
    for (int i=0 ; i < N-1 ; i++)
    {
        sum+=p[i];
    }

    int missing_id = p_sum - sum;
    printf("Missing id is: %d\n",missing_id);

    return 0;

}
