//
// Created by Emo on 2023/12/1.
//
//1. 源程序改错与跟踪调试
//        在下面所给的源程序中，函数 strcate(t,s)的功能是将字符串 s 连接到字符串 t 的尾
//        部；函数 strdelc(s,c)的功能是从字符串 s 中删除所有与给定字符 c 相同的字符，程序
//        应该能够输出如下结果：
//Programming Language
//ProgrammingLanguage Language
//ProgrmingLnguge
//        跟踪和分析源程序中存在的问题，排除程序中的各种逻辑错误，使之能够输出正
//        确的结果。
//（1） 单步执行源程序。进跟踪进入 strcate 时，观察字符数组 t 和 s 中的内容，分
//        析结果是否正确。当单步执行光条刚落在第二个 while 语句所在行时，i 为何值？t[i]
//为何值？分析该结果是否存在问题。当单步执行光条落在 strcate 函数块结束标记即右
//        花括号“}”所在行时，字符数组 t 和 s 分别为何值？分析是否实现了字符串连接。
//（2）跟踪进入函数 strdelc 时，观察字符数组 s 中的内容和字符 c 的值，分析结果是
//        否正确。单步执行 for 语句过程中，观察字符数组 s, j 和 k 值的变化，分析该结果是
//        否存在问题。当单步执行光条落在 strdelc 函数块结束标记“}”所在行时，字符串 s
//为何值？分析是否实现了所要求的删除操作。
///*实验 5-1 程序改错与跟踪调试题程序*/
#include <stdio.h>
void strcate(char[], char[]);
void strdelc(char[],char);
int main(void)
{
    char a[10]="Language",b[100]="Programming";//实现拼接至少要让b数组的大小大于等于a，b数组的总大小
    printf("%s %s\n", b, a);
    strcate(b,a);
    printf("%s %s\n", b, a);
    strdelc(b, 'a');
    printf("%s\n",b);
    return 0;
}

void strcate(char t[], char s[])
{
    int i=0;
    int j=0;
    while (t[i++]);
    i--;
    while(s[j]!='\0')
    {
        t[i++]=s[j++];
    }
    t[i]='\0';
}

void strdelc(char s[],char c)
{
    int j,k;
    for(j=k=0;s[j]!='\0';j++)
        if(s[j]!=c)
            s[k++]=s[j];
    s[k]='\0';
}



