//�ַ����Ƚ�
//���庯��strncmp �Ƚ������ַ���s��t��ǰn���ַ������ǰn���ַ�һ������0�������s<��t�������ֵ���s��ǰ���򷵻ظ����� �෴�򷵻�����
#include <stdio.h>
int mystrnncmp(const char *s,const char *t,int n)
{
    for(;n&&*s==*t;s++,t++,n--)
    {
        if(*s=='\0')
        {
            return 0;
        }
       
    }
    if(n>0)
        {
            return *s-*t;
        }
    return 0;
}
int main()
{
    char str1[20]="Hello World!";
    char str2[20]="Hello Hust";
    printf("%d\n",mystrnncmp(str1,str2,4));
    printf("%d\n",mystrnncmp(str1,str2,7));
}
