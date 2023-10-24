#include <stdio.h>
int main()
{
    char c;
    int flag=0;
    while((c=getchar())!='!')
    {
        if(c==' ')
        {
            if(flag==0)
            {
                putchar(c);
            }
            flag++;
        }
        else
        {
            flag=0;
            putchar(c);
        }
        
    }
    putchar('!');
    return 0;
}