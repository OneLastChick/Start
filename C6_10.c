//找最长的相同单词
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[] = "This is c programming";
    char *s =a;
    char b[] = "This is a test for programming";
    char *t=b;
    char *word,*p,chs,cht;
    int i,j,found,maxlen=0;
    while(*s)
    {
        while(isspace(*s))
        {
            s++;
        }
        for(i=0;isalpha(s[i]);i++);//遍历单词长度
        if(i>maxlen)
        {
            chs=s[i];
            s[i]='\0';
            for(p=t,found=0;*p&&!found;)
            {
                while(isspace(*p))
                {
                    p++;
                }
                for(j=0;isalpha(p[j]);j++);
                if(j==i)
                {
                    cht=p[j];
                    p[j]='\0';
                    if(!strcmp(s,p))
                    {
                        maxlen=i;
                        word=s;
                        found=1;
                    }
                    p[j]=cht;
                }
                p=p+j;
            }
            s[i]=chs;
        }
        s=s+i;
    }
    if(maxlen)
    {
        chs=word[maxlen];
        word[maxlen]='\0';
        printf("%s\n",word);
        word[maxlen]=chs;
    }
    else
    {
        printf("There is no same word\n");
    }
    return 0;
}