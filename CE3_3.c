#include <stdio.h>
int main()
{
    unsigned long ip;
    while(scanf("%u",&ip)!=EOF)
    {
        unsigned long mask=~((0xffffffff)<<8);
        unsigned int part1;
        unsigned int part2;
        unsigned int part3;
        unsigned int part4;
        part1= ip & mask;
        part2= (ip>>8) & mask;
        part3= (ip>>16) & mask;
        part4= (ip>>24) & mask;
        printf("%u.%u.%u.%u",part4,part3,part2,part1);
    }

}