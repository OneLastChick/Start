// #include <stdio.h>
// int main()
// {
//     char u[]="hello";
//     char v[]="world";
//     struct ST{
//         int a;
//         char *s;
//     }a[2]={{100,u},{200,v}},*p=a;
//     printf("%c",p->s[2]++);
    
// }

// for(i=0;j<N-1;i++)
// {
//     flag=1;
//     for(j=0;j<N-i-1;j++)
//     {
//         if(strcmp(str[j],str[j+1])>0)
//         {
//             tmp=str[j];
//             str[j]=str[j+1];
//             str[j+1]=tmp;
//             flag=0;
//         }
//     }
// }

// #define N 10
// void fun(int *a,int len)
// {
//  int i,*p=a;
//  for(i=0;i<len-1;++i)
//  {
//  if(*p>*(p+1))
//  {
//  int temp = *(p+1);
//  *(p+1) = *p;
//  *p = temp;
//  }
//  p++;
//  }
//  if (len>=2)
//  fun(a,len-1); 
// }
// 
// #include <stdio.h>
// #define N 9
// int fun(int i);
// int main()
// {
//     int s=0,i;
//     for(i=0;i<N;i++)
//     {
//         s+=fun(i+1);
        
//     }
//     printf("sum=%d\n",s);
// }
// int fun(int i)
// {
//     static s=0;
//     return (s+=i);
// }
#include <stdio.h>
void fun(int a,int *b);
int c;
void main(void)
{
    int a=10;
    int b=20;
    printf("m1:a=%d,b=%d,c=%d\n",a,b,c);
    fun(a,&b);
    printf("m2:a=%d,b=%d,c=%d\n",a,b,c);
}
void fun(int a,int *b)
{
    int c;
    printf("f1:a=%d,b=%d\n",a,*b);
    c=a,a=*b,*b=c;
    printf("f2:a=%d,b=%d,c=%d\n",a,*b,c);
}