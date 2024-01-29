#include <stdio.h>
#define SWAP(a,b) {a=a+b; b=a-b; a=a-b;}
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    SWAP(a,b);
    printf("%d %d",a,b);
    return 0;
}
