//�ַ������ӡ���дһ������strCatenate����Դ��s�����ȡn���ַ���ӵ�t��β��
#include <stdio.h>
char *strCatenate(char *t,const char *s,int n)
{
    char *p=t;
    while(*p)
    {
        p++;
    }
    while(n--&&(*p++=*s++));
    if(n<0)
    {
        *p='\0';
    }
    return t; //����Ŀ�괮t���׵�ַ��
}

int main()
{
    char s1[30]="";
    char *p;
    strCatenate(s1,"Programming",7);
    p=strCatenate(s1,"-language",5);
    printf("%s\n",s1);
    printf("%s\n",p);
    return 0;
}

