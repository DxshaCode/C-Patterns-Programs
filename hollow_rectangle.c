#include<stdio.h>
int main()
{
    int i,j,length,width;
    printf("enter the length of rectangle:");
    scanf("%d",&length);
    printf("enter the width of your rectangle:");
    scanf("%d",&width);
    for(i=0;i<width;i++)
    {
        for(j=0;j<length;j++)
        {
            if(i==0 || i==width-1 || j==0 || j==length-1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}