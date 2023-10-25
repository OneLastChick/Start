#include <stdio.h>

// 定义一个函数void strnCpy，接受一个字符数组s，一个常量字符数组t，和一个整数n作为参数
void strnCpy(char s[], const char t[], int n) {
  // 定义一个变量i，用于记录复制的字符个数
  int i = 0;
  // 用一个循环，从0开始，直到i等于n或者t[i]等于'\0'为止
  while (i < n && t[i] != '\0') {
    // 将t[i]赋值给s[i]
    s[i] = t[i];
    // i加一
    i++;
  }
  // 在s[i]处添加'\0'，表示字符串结束
  s[i] = '\0';
}

int main() {
  // 定义两个字符数组s和t，分别用于存放目标字符串和源字符串
  char s[20], t[20];
  // 定义一个整数n，用于存放复制的字符个数
  int n;
  // 从标准输入读取t和n的值
  scanf("%s %s %d",s ,t, &n);
  // 调用strnCpy函数，传入s,t和n作为参数
  strnCpy(s, t, n);
  // 将s的值输出到标准输出
  printf("%s\n", s);
  // 返回0表示程序正常结束
  return 0;
}
