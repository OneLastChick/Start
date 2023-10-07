#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char word[100];
    scanf("%s",word);
    len=strlen(word);
    for(i=1;i<=len;i++)
        if(len%i==0)
        {
            int ok=1;
            for(j=1;j<len;j++)
                if(word[j]!=word[j%i])
                {
                    ok=0;
                    break;
                }
        if(ok)
        {
            printf("%d\n",i);
        }
        }
    return 0;
}