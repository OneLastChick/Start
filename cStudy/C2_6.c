#include <stdio.h>    //寻找三个数的最大数
int main()
{
    int x,y,z;
    printf("Please input three number:");
    scanf("%d%d%d",&x,&y,&z);
    int max= x>y?(x>z?x:z):(y>z?y:z);  // 第二种解法  max= x>y&&y>z?x:(y>z?y:z)
    printf("The max number is %d .",max);
    return 0;
}