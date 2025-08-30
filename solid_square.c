#include<stdio.h>
int main()
{
    int i,j,side;
    printf("enter the side of your square:");
    scanf("%d",&side);
    for(i=0;i<side;i++)
    {
        for(j=0;j<side;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}