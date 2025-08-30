#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=0;i<9;i++)
    {
        if(i<=4)
        {
            for(j=0;j<i+1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else{
            for(j=9;j>i;j--)
            {
                printf("*");
            }
            printf("\n");
            
        }
    }
}