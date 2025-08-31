#include<stdio.h>
int main()
{
    int i,j,line;
    printf("enter the number of lines:");
    scanf("%d",&line);
    for(i=0;i<line;i++)
    {
        for(j=0;j<2*line-1;j++)
        {
            if(j==line-1-i || j== line-1+i || i==line/2 &&j<line-1+i && j>line-1-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}