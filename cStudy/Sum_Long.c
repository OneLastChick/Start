//���������ӷ�����
#include <stdio.h>
#include <ctype.h>
#define N 21
void shift(int *a,int n);
void getnum(int *a,int n)
{
    int i=n;
    while(i>=0&&isdigit(*(a+i)=getchar()))
    {
        *(a+i--)-='0';
    }
    if(i>=0)
    {
        shift(a,i);
    }
}
void shift(int *a,int n)//�Ҷ�����λ����
{
    int k,len,sft;
    len=N-1-n; 
    sft=N-len;
    for(k=0;k<len;k++)
    {
        *(a+k)=*(a+k+sft);
    }
    for(k=len;k<N;k++)
    {
        *(a+k)=0;//��û�д�����ݵ�λ���0
    }
}
int main()
{
    int x[N],y[N],z[N+1],i,carry=0,flag;
    for(i=0;i<N;i++)
    {
        *(z+i)=0;//��������
    }
    getnum(x,N-1);
    getnum(y,N-1);
    for(i=0;i<N;i++)
    {
        *(z+i)=*(x+i)+*(y+i)+carry;
        carry=(*(z+i)-*(z+i)%10)/10;
        *(z+i)%=10;
        *(z+i)+='0';
    }
    *(z+N)=carry+'0';
    flag=0;
    for(i=N;i>=0;i--)
    {
        if(flag==0&&*(z+i)!='0')
        {
            flag=1;
        }
        if(flag==1)
        {
            putchar(*(z+i));
        }
    }
    putchar('\n');
    return 0;
}