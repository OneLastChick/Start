#include <stdio.h>
#include<string.h>
#pragma
void  mystrcat(char* pa, char* pb)
{  
    for (; *pa != '\0'; pa++);
    for (; *pb != '\0'; pa++, pb++)
        *pa = *pb;
    *pa = '\0';
}
int main()
{	int sb;
    char a[80], b[20];
    gets(a);
    int m=strlen(a);
    gets(b);
 
     int n=strlen(b);
    scanf("%d",&sb);
    mystrcat(a, b);
    if(n<sb)
    printf("%s\n",a);
    if (n>=sb)
    for(int i = 0 ;i<m+sb;i++)
    printf("%c",a[i]);
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// void mystrncat(char *pa,char *pb)
// {
//     for(;*pa!='\0';pa++);
//     for(;*pb!='\0';pa++,pb++)
//     {
//         *pa=*pb;
//     }
//     *pa='\0';

// }
// int main(void)
// {
//     int thenumofchar;
//     char a[100];
//     char b[100];
//     fgets(a,100,stdin);
//     int m=strlen(b);
//     fgets(b,100,stdin);
//     scanf("%d",&thenumofchar);
//     mystrncat(a,b);
//     if(m<thenumofchar)
//     {
//         printf("%s\n",a);
//     }
//     if(m>=thenumofchar)
//     {
//         for(int i=0;i<m+thenumofchar;i++)
//         {
//             printf("%c",a[i]);
//         }
//     }
//     return 0;
// }