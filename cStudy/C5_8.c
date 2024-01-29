//填字游戏    在3X3的字格方阵
#include <stdio.h>
#define N 10
void output(int a[]);
int isprime(int m);
int check(int pos);
void writeNum(int pos);
int tag[N+1];
int a[9];
int checkmatrix[][3]={
    {-1},{0,-1},{1,-1},{0,-1},{1,3,-1},{2,4,-1},{3,-1},{4,6,-1},{5,7,-1}
};

int main()
{
    int i;
    for(i=1;i<=N;i++)  tag[i]=  1;
    writeNum(0);
    return 0;
}

void output(int a[])
{
    int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++) printf("%5d",a[3*i+j]);
            printf("\n");
        }
        printf("\n\n");
}

int isprime(int m)
{
    int i;
    if(m==2) return 1;
    if(m==1||m%2==0) return 0;
    for(i=3;i*i<=m;i+=2)
    {
        if(!(m%i)) return 0;
    }
    return 1;
}
int check(int pos)
{
    int i,j;
    for(i=0;(j=checkmatrix[pos][i])>=0;i++)
        if(!isprime(a[pos]+a[j])) return 0;
    return 1;
}

void writeNum(int pos)
{
    int i;
    if (pos >= 9)
    {
        output(a);
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            if (tag[i])
            {
                a[pos] = i;
                tag[i] = 0;
                if (check(pos))
                {
                    writeNum(pos + 1);
                }
                tag[i] = 1;
            }
        }
    }
}
