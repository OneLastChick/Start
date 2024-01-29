#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
void push(char c); //运算符c入栈
int pop(void);
int isempty(void);  //判断是否空栈
char gettop(void); //出栈
char stack[SIZE];
char *top=stack;   //栈顶指针

int main(int argc,char *argv[])
{
    char out[SIZE];  //存放逆波兰表达式
    char *p=out;
    for(int i=1;i<argc;i++)
    {
        if(isdigit(*argv[i])||*argv[i]=='.')
        {
            strcpy(p,argv[i]);
            p+=strlen(p);
            *++p=' ';
        }
        //处理运算符
        else
            switch(*argv[i])
            {
                case '+':
                case '-':
                while(!isempty()&&gettop()!='(')
                {
                    *p++=pop();*p++=' ';
                }
                push(*argv[i]);
                break;
                case '*':
                case '/':
                while(!isempty()&&(gettop()=='*'||gettop()=='/'))
                {
                    *p++=pop();
                    *p++=' ';
                }
                push(*argv[i]);
                    break;
                case '(':
                push(*argv[i]);
                break;
                case ')':
                while(gettop()!='(')
                {
                    *p++=pop();
                    *p++=' ';
                }
                pop();
                break;
                default:
                printf("illegal input!\n");
                return -1;
            }

    }
    //输出逆波兰表达式
    while(!isempty())
    {
        *p++=pop(),*p++=' ';
    }
    *p='\0';
    printf("%s\n",out);
    return 0;
}

void push(char c)
{
    *top++=c;
}



int pop(void)
{
    return *--top;
}

int isempty(void)
{
    if(top==stack)
    {
        return 1;
    }
    return 0;
}


char gettop(void)
{
    return *(top-1);
}