//���ú���ָ��ʵ�ֶ��֧��������
//�Բ˵��ķ�ʽʵ�ּӼ��˳�
#include <stdio.h>
int add(int a,int b),sub(int a,int b),mul(int a,int b),div(int a,int b);
int main()
{
    int x,y;
    int result,choice=1;
    int (*pf[4])(int x,int y)={add,sub,mul,div};
    while(choice)
    {
        printf("1.��\n2.��\n3.��\n4.��\n0.�˳�\n");
        printf("����ѡ��:");
        scanf("%d",&choice);
        if((choice<=4&&choice>0))
        {
            printf("�����������:");
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