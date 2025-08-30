#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        if(i<=4)
        {
            for(j=4;j>i;j--)
            {
                printf(" ");
            }
            for(j=0;j<i+1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(j=5;j<i+1;j++)
            {
                printf(" ");
            }
            for(j=0;j<9-i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}