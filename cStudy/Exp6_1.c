#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
char s1[50], s2[50];
char s3[50];
printf("Input a string:\n", s2);
scanf("%s", s2);
strcopy(s1, s2);
printf("%s\n", s1);
printf("Input a string again:\n", s2);
scanf("%s", s2);
strcopy(s3, s2);
printf("%s\n", s3);
return 0;
}
/*���ַ��� s ���Ƹ��ַ��� t�����ҷ��ش� t ���׵�ַ*/
char * strcopy(char *t, const char *s)
{
while(*t++ = *s++);
return (t);
}
// ������������Դ�����У����� strcopy(t, s)�Ĺ����ǽ��ַ��� s ���Ƹ��ַ���
// t�����ҷ��ش� t ���׵�ַ���뵥�����ٳ��򣬸��ݳ�������ʱ���ֵ������۲�
// �����ַ�����ֵ���������ų�Դ������߼�����ʹ֮�ܰ���Ҫ��������½��