#include <stdio.h>
//计算 s=1+x/1!+x^2/2!+...
long fac(int n);
double mulx(double x,int n);
double sum(double x,int n)
{
    int i;
    double z=1.0;
    long currentFac=1;
    for(i=1;i<=n;i++)
    {           //引用currentFac 避免重复调用fac
        currentFac *=i;
        z+=mulx(x,i)/currentFac;
    }
    return z;
}
double mulx(double x,int n)
{
    int i;
    double z = 1.0;
    for(i=1;i<=n;i++)
    {
        z=z*x;
    }
    return z;
}
long fac(int n)
{
    int i;
    long h=1;
    for(i=2;i<=n;i++)
    {
        h=h*i;
    }
    return h;
}
int main()
{
    double x;
    int n;
    printf("Input x and n:");
    scanf("%lf%d",&x,&n);
    printf("The result is %lf:",sum(x,n));
    return 0;
}