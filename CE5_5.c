#include <stdio.h>
int main()
{
    int sum=0;
    scanf("%d",&sum);
    int m1,m2,n1,n2;
    int array[100];
    //输入n个整数到数组n中
    for(int i=0;i<sum;i++)
    {
        scanf("%d",&array[i]);
    }
    Exchangearray(array,m1,n1,m2,n2);// m1 n1 m2 n2  
    return 0;
}