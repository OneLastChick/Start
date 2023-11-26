#include <stdio.h>
typedef void (*theptroffun)();
void task0();
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void scheduler();
void execute(theptroffun*,int);
int main()
{
    scheduler();
    return 0;
}
void task0() { printf("task0 is called!\n"); }
void task1() { printf("task1 is called!\n"); }
void task2() { printf("task2 is called!\n"); }
void task3() { printf("task3 is called!\n"); }
void task4() { printf("task4 is called!\n"); }
void task5() { printf("task5 is called!\n"); }
void task6() { printf("task6 is called!\n"); }
void task7() { printf("task7 is called!\n"); }
void scheduler()
{
    theptroffun fun[100];
    int len;
    char s[1000];
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        int temp;
        temp=s[i]-'0';
        if(temp==0)
        {
            fun[i]=task0;
        }
    }
}