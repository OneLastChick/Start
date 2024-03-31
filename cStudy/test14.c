// #include<stdio.h>
// struct w{char low; char high;};
// union u{struct w byte; short word;} uw;
// int main() 
// {  int result;uw.word=0x1234;
// printf("high byte:%02x\n",uw.byte.high);
// uw.byte.low=0x74;
// printf("word:%04x\n",uw.word);
// result=uw.word+0x2a34;
// printf("result:%04x\n",result);
// int define =1;
// return 0;} 
// #include <stdio.h>
// int main()
// {
   
//    int s,i;
//    printf("%d\n",s);
//    for(i=1;i<=100;i++)
//    {
//     s+=i;
//    }
//    printf("%d",s);
    
// }
// #include <stdio.h>

// void someFunction() {
//     int s; // 局部变量，在函数内部声明，没有显式初始化
//     printf("%d\n", s); // s 的值是未定义的，可能是任意值
// }

// int main() {
//     someFunction();
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5},i;
//     char *p=(char *)a;
//     for(i=0;i<3;i++)
//     {
//         printf("%d ",*((p+=sizeof(int))-sizeof(int)));
//     }
//     printf("\n");
// }
#include <stdio.h>
struct T{
    int i;
    char c[20];
    char *pc;
    struct T *next
}t2={2,"final exam.",t2.c,NULL},t1={1,"This is the",t1.c,&t2},*p=&t1;
int main()
{
    printf("%c",p->c[0]);
}