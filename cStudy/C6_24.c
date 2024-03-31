//利用函数指针实现多分支函数处理
//以菜单的方式实现加减乘除
#include <stdio.h>
int add(int a,int b),sub(int a,int b),mul(int a,int b),div(int a,int b);
int main()
{
    int x,y;
    int result,choice=1;
    int (*pf[4])(int x,int y)={add,sub,mul,div};
    while(choice)
    {
        printf("1.加\n2.减\n3.乘\n4.除\n0.退出\n");
        printf("请你选择:");
        scanf("%d",&choice);
        if((choice<=4&&choice>0))
        {
            printf("请输入操作数:");
            scanf("%d %d",&x,&y);
            result=(*pf[choice-1])(x,y);
            printf("result=%d\n",result);
        }
    }
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}