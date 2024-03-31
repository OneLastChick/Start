#include <stdio.h>
int atoh(const char nstr[])
{  //跳过0x
    int sum=0;
    for(int i=2;nstr[i]!='\0';i++)
    {
        if(nstr[i]>='0'&&nstr[i]<='9')
        {
            sum = sum*16 + (nstr[i] - '0' );
            continue;
        }
        else if(nstr[i]>='a'&&nstr[i]<='f')
        {
            sum = sum*16 + (nstr[i] - 'a' + 10);
            continue;
        }
        else if(nstr[i]>='A'&&nstr[i]<='F')
        {
            sum = sum*16 + (nstr[i] - 'A' + 10);
            continue;
        }
    } 
    return sum;
    
}
int main()
{
    char num[20];
    int i = 0;
    scanf("%d",&i);
    int result[20];
    for(int n=0;n<i;n++)
    {
        scanf("%s",num);
        result[n]=atoh(num);
    }
    for(int j=0;j<i;j++)
    {
        printf("%d ",result[j]);
    }

    return 0;
}