//条件编译
#include <stdio.h>
#define CHANGE 1 //设置CHANGE宏为1表示大小写转换
int main()
{
    char input[100];
    printf("Please input a string:");
    scanf("%s",input);
      
    #if CHANGE  //条件编译
        for(int i =0;input[i]!='\0';i++)
        {
            if(input[i]>='a' && input[i]<='z')
                input[i]=input[i]-'a'+'A';
            else if(input[i]>='A'&&input[i]<='Z')
                input[i]=input[i]-'A'+'a';
        }
    #endif

    printf("The final input:%s\n",input);

    return 0;

        
}