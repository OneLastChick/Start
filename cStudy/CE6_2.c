#include <stdio.h>
void OutputZhuanZhiarray(int *array,int i,int j)
{
    for(int row=0;row<j;row++)
    {
        for(int col=0;col<i;col++)
        {
            printf("%d",*(array+col*j+j-1-row));
            if(col<i-1)
            {
                printf(" ");
            }
        }
        if(row<j-1)
        {
            printf("\n");
        }
    }
}
int main()
{
    int i=0,j=0;
    scanf("%d %d",&i,&j);
    int array[i][j];
    for(int row=0;row<i;row++)
    {
        for(int col=0;col<j;col++)
        {
            scanf("%d",&array[row][col]);
        }
    }
    OutputZhuanZhiarray((int *)array,i,j);
    return 0;
}