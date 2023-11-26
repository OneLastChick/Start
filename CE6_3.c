//输入n行文本，每行不超过80个字符，用字符指针数组指向键盘输入的n行文本，且n行文本的存储无冗余。然后执行如下操作：删除每一行中的前置空格（’ ‘）和水平制表符（’\t’），并将文本中多个空格合并为一个
//空格，如果有。该操作要求单独定义成函数。在main函数中输出执行了以上操作的各行。
#include <stdio.h>
void DeleteSpace(int (*text)[80],int n)
{
    int i,flag=0;
    int k=0;
    int new[n][80];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<80;j++)
        {
            if(*(*(text+i)+j)!=' '||*(*(text+i)+j)=='\t')
            {
                flag++;
            }
           
        }
    }
}
int main()
{
    int n=0;
    //输入n行文本
    scanf("%d",&n);
    char text[n][80];
    DeleteSpace(text,n);
    
}