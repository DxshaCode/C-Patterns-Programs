#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("enter the side of square:");
    scanf("%d",&lines);
    for(i=0;i<lines;i++)
    {
        for(j=0;j<lines;j++)
        {
            if(j==0 || j== lines-1 || i==0 || i==lines-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}