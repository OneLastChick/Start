#include <stdio.h>
unsigned long fac_sum(int n)
{
    unsigned long s=0,f=1;
    int i=1;
    do{
        f*=i++;
        s+=f;
    }while(i<=n);
    return s;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%lu\n",fac_sum(n));
    int arr[10]={0};
    printf("%d",*(arr+5));
}