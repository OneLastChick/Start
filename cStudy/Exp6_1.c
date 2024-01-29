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
/*将字符串 s 复制给字符串 t，并且返回串 t 的首地址*/
char * strcopy(char *t, const char *s)
{
while(*t++ = *s++);
return (t);
}
// 在下面所给的源程序中，函数 strcopy(t, s)的功能是将字符串 s 复制给字符串
// t，并且返回串 t 的首地址。请单步跟踪程序，根据程序运行时出现的现象或观察
// 到的字符串的值，分析并排除源程序的逻辑错误，使之能按照要求输出如下结果