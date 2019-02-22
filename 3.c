#include<stdio.h>
void main()
{
    int i,j;
    int rowCount = 0;
    int noOfRows = 6;
    for (i = noOfRows; i > 0; i--)
        {
            //Printing i*2 spaces at the beginning of each row
            for (j = 1; j <= i*2; j++)
            {
                printf("*");
            }
            //Printing j value where j value will be from 1 to rowCount
            for (j=j+1; j <= 0; j++)
            {
                printf("%d ",j);
            }
            //Printing j value where j value will be from rowCount-1 to 1
            for (j = rowCount-1; j >= 1; j--)
            {
                printf("%d ",j);
            }
            printf("\n");

            //Incrementing the rowCount

            rowCount++;
        }
}

