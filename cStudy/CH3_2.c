#include <stdio.h>
int main()
{
    unsigned short k,mask,result;
    scanf("%hu",&k);
    mask=0x0ff0;
    result= k>>12 | (k&mask) | k<<12;
    printf("%hu",result);
    return 0;
}