#include <stdio.h>
//递推
// long long sum_fac(int n)
// {
//     long long s=0;
//     int i;
//     long long  fac=1.0;
//     for(i=1;i<=n;i++)
//      { fac = fac*i;
//            s+=fac;}
//     return s;
// }
//递归
long long sum_fac1(int n)
{
    if(n==0||n==1) return 1;
    else return n*sum_fac1(n-1);
}
long long sum_fac2(int n)
{
    if(n==0) return 0;
    else return sum_fac2(n-1)+sum_fac1(n);

}
int main()
{
    int k;
    for(k=1;k<=20;k++)
    {
        printf("k=%d\tthe sum is %lld\n",k,sum_fac2(k));
    }
    return 0;
}