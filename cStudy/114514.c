#include <stdio.h>
int main()
{
    unsigned long l= 0;
    int x=1,y=2;
    l=sizeof 'A';printf("%ld\n",l);
    l=sizeof"A";printf("%ld\n",l);
    l=sizeof((x>='a'&&x<='z')||(x>='A'&&x<='Z'));printf("%ld\n",l);
    l=sizeof(x>='a'&&x<='z')||(x>='A'&&x<='Z');printf("%ld\n",l);
    l=sizeof x>y;printf("%ld\n",l);
    l=sizeof(x>y);printf("%ld\n",l);
    l=sizeof 10;printf("%ld\n",l);
    l=sizeof 10.0f;printf("%ld\n",l);
    l=sizeof 10.0;printf("%ld\n",l);
    l=sizeof x>y?'A':10ul ;printf("%ld\n",l);
    l=sizeof (x>y?'A':10ul);printf("%ld\n",l);

    return 0;
}