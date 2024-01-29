//单位矩阵的判断。定义一个函数,用来判断一个5阶方阵是不是单位矩阵
//,若是则函数返回1,若不是则函数返回0。要求形参为指向数组元素的指针
// #include <stdio.h>
// int JudgeI(int Square[5][5])
// {
//     int i,j=0;
//     int flag=1;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//            if(i==j&&Square[i][j]!=1)
//            {
//             flag=0;
//            }
//            else if((i!=j)&&Square[i][j]!=0)
//            {
//             flag=0;
//            }
//         }
//     }
//     return flag;
// }
int JudgeI(int (*Square)[5])
{
    int flag=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(i==j&&*(*(Square+j)+i)!=1)
           {
            flag=0;
           }
           else if((i!=j)&&*(*(Square+j)+i)!=0)
           {
            flag=0;
           }
        }
    }
    return flag;
}
int main(void)
{
    int Square[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&Square[i][j]); //i行j列
        }
    }
    printf("%d",JudgeI(Square)?1:0);
}