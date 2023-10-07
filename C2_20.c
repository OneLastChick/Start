//字符分类统计   ln字母  dn数字  bn空白符
#include<stdio.h>
int main()
{
    char c;
    int ln,bn,dn;
    ln=dn=bn=0;
    printf("Please input a text:end with ctrl+z\n");
    while((c=getchar())!=EOF)
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        ln++;
        if(c>='0'&&c<='9')
        dn++;
        if(c=='\t'||c=='\n'||c==' ')
        bn++;
    }
    printf("ln=%d\n",ln);
    printf("bn=%d\n",bn);
    printf("dn=%d\n",dn);

    return 0;
}