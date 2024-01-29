//编程计算下面的公式: s=1+x/1!+.....+x^n/n!
#include <stdio.h>
long fac(int n)
{
    double su = 1;
    while (n>=1)
    {
        su=n*su;
        n--;  
    }
    return su;
}

double mulx(double x,int n)
{
    double sum=1;
    while (n>=1)
    {
        sum = x*sum;
        n--;
    }
    return sum;
    
}

int main()
{
    double x;
    int n;
    printf("Please input x and n\n");
    scanf("%lf %d",&x,&n);
    double he = 1.0;
    while(n>=1)
    {
        he += mulx(x,n)/fac(n);
        n--;
    }
    printf("The result is %lf\n",he);

    return 0;
}