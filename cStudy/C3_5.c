#include <stdio.h>
int main()
{
    char c;
    int alpha,digit,other;
    alpha=digit=other=0;
    printf("input characters end of new line:\n");
    while((c=getchar())!='\n')
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            alpha++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            other++;
    }
    printf("alphas=%d\n digits=%d\n other=%d\n",alpha,digit,other);
    return 0;
}