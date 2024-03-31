//查找子串  给定一段长度N的文本字符串 和长度M的模式字符串  在主串中查找子串
#include <stdio.h> 
int FindSubstr(char str[],char substr[])
{
    int i,k;
    for(i=0;str[i]!='\0';i++)   //遍历每行的字母
    {
        for(k=0;substr[k]!='\0';k++)
            if(str[i+k]!=substr[k])   //比较每个字符
                break;   //break的作用!!!
            if(substr[k]=='\0')
                return i;
    }
    return -1;
}
int main()
{
    char text[][50]={
        "The expression expr1 is evaluated first.",
        "If is non-zero(true),then the expression",
        "expr2 is evaluated,and that is the value",
        "of the conditional expression."
    };
    char pattern[]="is";
    int i;
    for(i=0;i<4;i++)
        if(FindSubstr(text[i],"is")>=0) //传的是二维数组的一行
            printf("%s\n",text[i]);
    return 0;
}