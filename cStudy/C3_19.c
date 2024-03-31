//卡车违反交通规则问题
//题意分析:   abcd   a=b!  c=d   abcd=x*x=e
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    for(int x=32;x<100;x++)       //思路2：    
    {
        e=x*x;
        a=(e/1000)%10;
        b=(e/100)%10;
        c=(e/10)%10;
        d=e%10;
        if(b!=c&&a==b&&c==d)
            printf("The number is %d \n",e);
    }
        
    return 0;
}



//  // 检查输入是否为正整数的平方
//     if (num > 0 && sqrt(num) == (int)sqrt(num)) {
//         printf("%d 是一个正整数的平方。\n", num);
//     } else {
//         printf("%d 不是一个正整数的平方。\n", num);
//     }