//欧几里得算法  辗转相除法
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    printf("Please input a and b\n");
    scanf("%d %d",&a,&b);
    printf("The rusult is %d",gcd(a,b));
    return 0;
}