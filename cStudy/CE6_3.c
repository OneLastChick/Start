// //输入n行文�?，每行不超过80�?字�?�，用字符指针数组指向键盘输入的n行文�?，且n行文�?的存储无冗余。然后执行�?�下操作：删除每一行中的前�?空格（�? ‘）和水平制表�?�（’\t’），并将文�?�?多个空格合并为一�?
// //空格，�?�果有。�?�操作�?�求单独定义成函数。在main函数�?输出执�?�了以上操作的各行�?
// #include <stdio.h>
// void DeleteSpace(char (*text)[80],int n)
// {
//     int i,flag=0;
//     int k=0;
//     int new[n][80];
//     for(i=0;i<n;i++)
//     {
//         for(int j=0;j<80;j++)
//         {
//             if(*(*(text+i)+j)!=' '||*(*(text+i)+j)=='\t')
//             {
//                 flag++;
//             }
           
//         }
//     }
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     char text[n][80];
//     DeleteSpace(text,n);
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void DeleteSpace(char*ps,int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	char * ps[n+1],letter[80];
	for(i=0;i<=n;i++)
	{
		gets(letter);
		ps[i]=(char*)malloc(strlen(letter)+1);
		if(ps[i]==NULL) return -1;
		strcpy(ps[i],letter);
		DeleteSpace(ps[i],strlen(letter)+1);
	}
	for(i=0;i<=n;i++)
	{
	if(i==0||i==n)
	printf("%s",ps[i]);
	else
	puts(ps[i]);
	}
	return 0;
} 

void DeleteSpace(char*ps,int n)
{
	int i,flag=0;
	int k=0;
	for(i=0;i<=n-1;i++)
	{
	if(ps[i]==' '||ps[i]=='\t') flag++;
	else break;
	}
	i=0;
	for(;(ps[i]=ps[i+flag])!='\0';i++);
	i=0;
	while(ps[i]!='\0')
	{
		if(ps[i]==' ')
		{
			while(ps[i+1]==' ')
			{
				while((ps[i+1+k]=ps[i+2+k])!='\0')   k++;
				k=0;
			}
		} 
		i++;
	}
}