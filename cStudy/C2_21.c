//getchar 过滤前导空格
#include<stdio.h>
int main()
{
    char c;
    int leadsp;
    printf("Input a line of string :\n");
    leadsp=1;
    while((c=getchar())!='\n')
    {
        if(c!=' '||!leadsp)
        {
            leadsp=0;
            putchar(c);
        }
    }  
    return 0; 
}