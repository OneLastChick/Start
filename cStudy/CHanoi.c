#include <stdio.h>
#include <stdlib.h>
//汉诺塔问题-----经过大量的重复操作
//可以总结出一下的最优解规律
//第一步：把n-1个盘子从a借助c移动到b  move(n-1，a,c,b)
//第二步:把剩下的盘子从a移到c    print一波
//第三步：把n-1个盘子从b借助c移动到a   move(n-1,b,c,a)
//...变成n-2了  又开启了一段轮回，进行递归调用
void move(int n,int a,int b,int c)
{
    static int cnt=1;
    if(n==1)
    {
        printf("Step:%d:%c->%c\n",cnt++,a,c);
    }
    else
    {
        move(n-1,a,c,b);
        printf("S4tep:%d:%c->%c\n",cnt++,a,c);
        move(n-1,b,c,a);
    }
}
int main()
{
    int n,a='A',b='B',c='C';
    printf("\n---------TOWERS OF HANOI!!!\n");
    printf("The problem starts with n disks on Tower A.\nInput n:\n");
    if(scanf("%d",&n)!=1||n<1)
    {
        printf("\nERROR:Postive integer not found\n");
        return -1;
    }
    move(n,a,b,c);
    return 0;
}