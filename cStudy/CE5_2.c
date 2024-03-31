//学生成绩管理
#include <stdio.h>
//定义一个学生结构体
struct Student
{
    char name[20];
    int score;
};
//定义个存储学生信息的数组
struct Student students[20];
int studentNum=0;
//记录每个学生成绩的函数
void RecordGrades()
{
    for(int i=0;i<studentNum;i++)
    {
        scanf("%s %d",students[i].name,&students[i].score);
    }
    printf("%d records were input!\n",studentNum);
    return;
}
//成绩排序函数--冒泡排序找最大值
void GradesResort()
{
    int i,j;
    for(i=0;i<studentNum-1;i++)
    {
        for(j=0;j<studentNum-i-1;j++)
        {
            if(students[j].score < students[j+1].score)
            {
                struct Student temp = students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
    printf("Reorder finished!\n");
    return;
}
//成绩输出---输出排序后的所有学生的姓名和C语言课程的成绩
void OutputGrades()
{
    for(int i=0;i<studentNum;i++)
    {
        printf("%s %d\n",students[i].name,students[i].score);
    }
}
//利用二分查找，输出查找到成绩的姓名和C语言课程的程序
void GradesSearch()
{
    int Target;
    scanf("%d",&Target);
    int left=0;
    int right=studentNum-1;
    int flag=0;  //引用flag来标记是否查找到
    //二分查找
    while(left<=right)
    {
        int middle= (left+right)/2;
        if(students[middle].score==Target)
        {
            flag=1;
            printf("%s %d\n",students[middle].name,Target);
            break;
        }
        else if(students[middle].score<Target)
        {
            right=middle-1;
        }
        else
        {
            left=middle+1;
        }
    }
    if(flag==0)
    {
        printf("not found!\n");
    }
    return;
}
int main()
{
    //等候命令
    int command=0;
    while(scanf("%d",&command),command)
    {
        if(command==1)
        {
            scanf("%d",&studentNum);
            RecordGrades();
            continue;
        }
        else if(command==2)
        {
            GradesResort();
            continue;
        }
        else if(command==3)
        {
            OutputGrades();
            continue;
        }
        else if(command==4)
        {
            GradesSearch();
            continue;
        }
        else
        {
            printf("Invailed input");
        }
    }
    return 0;
}