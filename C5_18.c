#include <stdio.h>
void strcate(char t[], char s[])
{
    int i = 0, j = 0;
    
    // 移动到字符串 t 的末尾
    while (t[i] != '\0') {
        i++;
    }
    
    // 将字符串 s 复制到 t 的末尾
    while (s[j] != '\0') {
        t[i] = s[j];
        i++;
        j++;
    }
    
    // 确保字符串 t 以 null 终止
    t[i] = '\0';
}

void strdelc(char s[],char c)
{
    int j,k;
    for(j=k=0;s[j]!='\0';j++)
    {
        if(s[j]!=c)
        {
            s[k++]=s[j];
        }
    }
}
int main()
{
    char a[20]="Language";
    char b[20]="Programming";
    printf("%s %s\n",b,a);
    strcate(b,a);
    printf("%s %s\n",b,a);
    strdelc(b,'a');
    printf("%s\n",b);
    return 0;
}