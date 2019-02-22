#include<stdio.h>
void main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {

            if(i%2 == j%2)
                printf("%d",1);
            else
                printf("%d",0);
        }
        if(i!=4)
            printf("\n");
    }
}

