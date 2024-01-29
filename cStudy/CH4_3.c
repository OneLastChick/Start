#include <stdio.h>
int gcd(int a,int b)
{
    int c;
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",gcd(a,b),(a*b)/gcd(a,b));
    return 0;
}