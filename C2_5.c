#include <stdio.h>
#define B a+y
int main()
{
    char a=4,b=6,c;
    short x= 0x80ff;
    short y=10;
    printf("%d\n",++a|b);
    printf("%d\n",c=x>>8);
    printf("%d\n",y&x<<4);
    printf("%d\n",a^b<<2);   //???
    printf("%d\n",2*B/2);     //???
    printf("%d\n",a<=b&&a/y);
    printf("%d\n",y++?y+a:y-a); //???
    printf("%d\n",~b|x);
    printf("%d\n",!(~a)?a+b:a&b?a-b:b%2);
    printf("%d\n",!x||a!=b);

    return 0;
}