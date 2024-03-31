//µ¥Î»¾ØÕóµÄÅÐ¶Ï
#include <stdio.h>
#define N 5
int isUnitMatrix(int (*x)[N]);
int main(void)
{
    int a[N][N]={
        {1,0,0,0,0}
        ,{0,1,0,0,0}
        ,{0,0,1,0,0}
        ,{0,0,0,1,0}
        ,{0,0,0,0,1}
    };
    if(isUnitMatrix(a))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
int isUnitMatrix(int (*x)[N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
                if(*(*(x+i)+j)==0)
                {
                    return 0;
                }
            }
            else
            {
                if(*(*(x+i)+j)==1)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}