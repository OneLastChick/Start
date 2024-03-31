//计算逆波兰表达式
//编写程序cal，计算命令行中逆波兰表达式的值
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 1024
double stack[SIZE];
double *top=stack;
//执行入栈操作
void push(double x)
{
    if(top == stack+SIZE)//栈已满
    {
        printf("Stack is full!\n");
        exit(EXIT_FAILURE);
    }
    *top++=x;
}

//执行出栈操作
double pop(void)
{
    if(top==stack)
    {
        printf("Stack is empty!\n");
        exit(EXIT_FAILURE);
    }
    return *--top;
}

int main(int argc,char **argv)
{
    int i;
    double x;
    for(i=1;i<argc;++i)
    {
        if(isdigit(argv[i][0]))
        {
            push(atof(argv[i]));
        }
        else
        {
            switch(argv[i][0])
            {
                case '+':push(pop()+pop());break;
                case '-':x=pop();push(pop()-x);break;
                case '*':push(pop()*pop());break;
                case '/':x=pop();push(pop()/x);break;
                default:printf("unknown operator!\n");
                return -1;
            }
        }
    }
    printf("The result is %f\n",pop());
}