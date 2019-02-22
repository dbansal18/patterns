#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<11;i++)
    {
        printf("7");
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=1;j<10-i;j++)
        {
            printf(" ");
        }
        printf("7\n");
    }
}

