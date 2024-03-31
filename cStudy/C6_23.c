#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
void push(char c); //�����c��ջ
int pop(void);
int isempty(void);  //�ж��Ƿ��ջ
char gettop(void); //��ջ
char stack[SIZE];
char *top=stack;   //ջ��ָ��

int main(int argc,char *argv[])
{
    char out[SIZE];  //����沨�����ʽ
    char *p=out;
    for(int i=1;i<argc;i++)
    {
        if(isdigit(*argv[i])||*argv[i]=='.')
        {
            strcpy(p,argv[i]);
            p+=strlen(p);
            *++p=' ';
        }
        //���������
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
    //����沨�����ʽ
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