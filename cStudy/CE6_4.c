#include<stdio.h>
#include<string.h>
typedef void (*TheptrofFun)();
void task0();
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void scheduler();
void execute(TheptrofFun* , int );
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
 
void scheduler()//调度函数；
{
    TheptrofFun fun[100];  //定义一个指针数组
    int len;
    char s[1000];
    
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        int temp;
        temp = s[i] - '0';
        switch(temp)
        {
            case 0:
            fun[i]=task0;
            continue;
            case 1:
            fun[i]=task1;
            continue;
            case 2:
            fun[i]=task2;
            continue;
            case 3:
            fun[i]=task3;
            continue;
            case 4:
            fun[i]=task4;
            continue;
            case 5:
            fun[i]=task5;
            continue;
            case 6:
            fun[i]=task6;
            continue;
            case 7:
            fun[i]=task7;
            continue;

        }
    }
    execute(fun, len);
}
 
void execute(TheptrofFun* fun, int len) {
    for (int i = 0; i < len; i++)   
        fun[i]();  
}