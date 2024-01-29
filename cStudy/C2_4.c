#include <stdio.h>
void convertToLowercase(char str[]);
int main()
{
    char myString[100]; // 声明一个字符数组来存储输入的字符串

    printf("请 input : ");
    scanf("%s", myString); // 从标准输入读取字符串，存储在 myString 中

    printf("Your put : %s\n", myString);
    convertToLowercase(myString);
    printf("Atfer convert:%s",myString);
    

    return 0;
}
void convertToLowercase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]+='A'-'a';
        }
    }
}