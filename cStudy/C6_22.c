//�����沨�����ʽ
//��д����cal���������������沨�����ʽ��ֵ
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 1024
double stack[SIZE];
double *top=stack;
//ִ����ջ����
void push(double x)
{
    if(top == stack+SIZE)//ջ����
    {
        printf("Stack is full!\n");
        exit(EXIT_FAILURE);
    }
    *top++=x;
}

//ִ�г�ջ����
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