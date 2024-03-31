// #include <stdio.h>        计算机器字长的第一种方法
// int main()
// {

//     unsigned k=~0;
//     int bits=0;
//     while(k != 0)
//     {
//         k=k<<1;
//         bits++;
//     }
//     printf("Machine Length is %d\n",bits);
//     return 0;
// }
//计算机器字长的第二种方法
// #include <stdio.h>
// int main()
// {
//     unsigned k;
//     int bits;
//     for(k=~0,bits=0;k;k>>=1)
//     {
//         bits++;
//     }
//     printf("bits=%d\n",bits);
//     return 0;
// }
// 计算字长的第三种方法
// #include <stdio.h>
// int main()
// {
//     int k = ~0,bits=0;
//     do
//     {
//         k<<=1;
//         bits++;
//     }   while(k);
//     printf("bits=%d\n",bits);
//     return 0;
// }
//计算字长的第四种方法
#include <stdio.h>
int main()
{
    unsigned k;
    int bits;
    for(k=~0,bits=0;k;k>>1)
        {bits++;}
    printf("bites=%d\n",bits);
    return 0;
}
