#include<stdio.h>
int main()
{
    int min=1;
    float dis=0.5;
    printf("The National Sports Federation marathon.\n");

    while(1)
    {
        printf("Minute: %d Distance covered= %.1f km\n",min,dis);
        min++;
        dis =dis+0.5;
        if(dis==10.5)
        {
            break;
        }
    }
    printf("Marathon complete!");
    return 0;
}

