#include<stdio.h>  //加法 进位次数
int main()
{
    int a,b;
    int c,ans;
    int i;
    while(scanf("%d%d",&a,&b))
    {
        if(!a&&!b)
            return 0;
        c=0,ans=0;    //c 表示最低位相加的值  大于9则进1  ans 表示进位次数
        for(i=9;i>=0;i--)
        {
            c=(a%10+b%10+c)>9?1:0;    //最低
            ans += c;
            a /=10;   //去掉 a的末尾
            b/=10;    //去掉b的末位

        }
        printf("%d\n",ans);
    }
    return 0;
}