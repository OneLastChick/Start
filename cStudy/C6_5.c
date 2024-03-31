#include <stdio.h>
int main()
{
    int ip=0xc0a80164;
    unsigned char *p=(unsigned char*)   &ip;
    printf("%u.%u.%u.%u",*(p+3),*(p+2),*(p+1),*(p));
    return 0;
}