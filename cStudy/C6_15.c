//����ֵ
//���庯����һ����������������в�����ֵ������ָ������������ֵ����Сֵ
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 10
void get_max_min(int a[],int n,int *pmax,int *pmin)
{
    *pmin=*pmax=*a; //��ʼ�����Ե�һ����Ϊ���ֵ������Сֵ
    for(int i=1;i<n;i++)
    {
        if(*pmin>a[i])
        {
            *pmin=a[i];
        }
        else if(*pmax<a[i])
        {
            *pmax=a[i];
        }
    }
}
int main()
{
    int a[N];
    int max,min,i;
    printf("The array's element as followed:\n\n ");
    srand(time(NULL)); //��ʼ�������������
    for(i=0;i<N;i++)
    {
        a[i]=rand()%100;
        printf("%-5d",a[i]);
    }
    get_max_min(a,N,&max,&min);
    printf("\n\nmax is %d\nmin is %d\n",max,min);
    return 0;
}