// #include <stdio.h>
// #include <string.h>
// void ReverseString(char c[],int x,int y)
// {
//     if(x>y)
//     {
//         return;
//     }
//     char temp;
//     temp=c[x];
//     c[x]=c[y];
//     c[y]=temp;
//     ReverseString(c,x+1,y-1);
// }
#include <string.h>
#include <stdio.h>
// int main()
// {
//     char c[100];
//     int len=0;
//     fgets(c, sizeof(c), stdin);
//     len=strlen(c);
//     c[len-1]='\0';
//     ReverseString(c,0,len-2);
//     printf("%s\n",c);
//     return 0;
// } 
//#include <string.h>                        //为什么我的写法错误？？？？

void reverseString(char *c, int x, int y) {
    if (x >= y) {
        return;
    }

    // 交换字符串的首尾字符
    char temp = c[x];
    c[x] = c[y];
    c[y] = temp;

    // 递归调用，缩小范围
    reverseString(c, x + 1, y - 1);
}

int main() {
    char c[100];
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';
    int abcdefg = strlen(c);
    reverseString(c, 0, abcdefg - 1);
    printf("%s\n", c);
    return 0;
}
