#include <stdio.h>
int main()
{
    int arr[3]={0,0,0};
    //arr[0]  -数字字符
    //arr[1]  -英文字符
    //arr[2]  -其他字符
    char c;
    while(((c=getchar())!=EOF))
    {
        if(c>='0'&&c<='9')
        {
            arr[0]++;
        }
        else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            arr[1]++;
        }
        else
        {
            arr[2]++;
        }
    }
    printf("%d %d %d",arr[0],arr[1],arr[2]);
    return 0;
}