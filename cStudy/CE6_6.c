// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #define n 16
// char *p(char* s[],int* thenumberofeverywords)
// {	
// 	char* q;
// 	int max_i,maxlen=0;
// 	int i;
// 	for(i=0;i<n;i++)
// 	{
// 	int l=strlen(s[i]);
// 	if(maxlen<l)
// 	{
// 		maxlen=l;
// 		max_i=i;
// 	}
// }
// 	q=s[max_i];
// 	*thenumberofeverywords=strlen(s[max_i]);
// 	return q;

// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define words 16
char *p(char* ptr[],int* thenumberofeverywords)
{
    char* q;
    int max_i,maxlen=0;
    for(int i=0;i<words;i++)
    {
        int l=strlen(ptr[i]);
        if(maxlen<l)
        {
            maxlen=l;
            max_i=i;
        }
    }
    q=ptr[max_i];
    *thenumberofeverywords=strlen(ptr[max_i]);
    return q;

}
int main()
{
    char *ptr[100];
    int number=0;
    int *m=&number;
    for(int i=0;i<words;i++){
        ptr[i]=(char*)malloc(sizeof(char)*100);
        scanf("%s",ptr[i]);
    }
    printf("%s",p(ptr,m));
    printf(" %d",*m);
}
