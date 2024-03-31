//ISBN识别码的判断
#include <stdio.h>
int main()
{
    char s[18];
    int c;
    while(scanf("%s",s)!=EOF)
    {
        int sum = 0,i,j=1;
        for(i=0;i<15;i++)
            if(s[i]!='-')
                if(j)             //奇数 x1 
                {
                    j--;
                    sum += s[i] - '0';
                }
                else
                {
                    j++;
                    sum += (s[i]-'0')*3;
                }
    
            c=10  - sum % 10;
        if(c==10)   c == '0' ;
        else c = c + '0';
        if (c==s[16])
            puts("Right");
        else
        {
         s[16]=c;
            puts(s);
        }
    }
    
    return 0;
}