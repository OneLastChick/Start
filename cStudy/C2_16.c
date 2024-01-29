//输入若干成绩 找出最高成绩
#include <stdio.h>
int main()
{
    int score,max;
    printf("Please input scores.And end with '-1'\n");
    scanf("%d",&score);
    while(score!=-1)
    {
        if(score>max)
        max=score;
        scanf("%d",&score);
    }
    printf("max=%d\n",max);
    return 0;
}