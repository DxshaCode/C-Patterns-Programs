#include<stdio.h>
int main()
{
    int i,j;
    int k;
    for(i=0;i<5;i++)
    {
        
        
            for(j=0;j<i;j++)
            {
                printf(" \t");
            }
        
        for(j=0;j<5-i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
    
}