//˫���������İ༶�ɼ�����ϵͳ
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 4
struct STUD{
    unsigned number;       //ѧ��
    unsigned course[MAX]; //��ѧ��������Ӣ��ɼ�
    float average;   //ƽ���ɼ�
    struct STUD *next;
    struct STUD *last;
};
struct CLASS{
    unsigned no;      //���
    unsigned students;  //�༶����
    struct STUD *first;  //ָ���һ��ѧ��
};

char * cou[MAX]={"math","physics","politics","english"};
//����༶ѧ����Ϣ������˫������
void create(struct CLASS *pclass)
{
    struct STUD *p,*tmp=NULL;
    int n=0,k=0;
    int ch,flag;
    do{
        p=(struct STUD*)malloc(sizeof(struct STUD));
        printf("Input the number of student:");
        scanf("%u",&p->number);
        while(1)
        {
            for(flag=1,k=0;k<MAX;++k)
            {
                printf("intput %s:",cou[k]);
                scanf("%u",&p->course[k]);
                if(p->course[k]>100||p->course[k]<0)
                {
                    flag=0;
                    printf("score error\n");
                }
            }
                if(flag)
                {
                    break;
                }
                
        }
        p->average=(float)(p->course[0]+p->course[1]+p->course[2]+p->course[3])/4;
            p->next=tmp;
            p->last=NULL;
            if(n)
            {
                tmp->last=p;
            }
            pclass->first=tmp=p;
            ++n;
            printf("continue?");
            while(isspace(ch=getchar()));
    }while(ch=='y'||ch=='Y');
}
void output(struct CLASS *pcalss)
{
    struct STUD *p;
    int n;
    printf("\nClass:%u\tNumber of students:\n",pcalss->no,pcalss->students);
    printf("\nsequence\tNo\tmath\tphysics\tpolitics\tEnglish\taverage\n");
    printf("----------------------------------------------------------------\n");
    for(n=1,p=pcalss->first;p!=NULL;p=p->next)
    {
        printf("%-10d%-10d%3u\t%3u\t%3u\t%3u\t%6.2f\n",n,p->number,p->course[0],p->course[1],p->course[2],p->course[3],p->average);
    }
}
int main(void)
{
    struct CLASS cla;
    //��ʼ���༶�ṹ����cla
    printf("input number of class:");
    scanf("%u",&cla.no);
    cla.students=0;
    cla.first=NULL;
    create(&cla);
    output(&cla);
    return 0;
    
}
