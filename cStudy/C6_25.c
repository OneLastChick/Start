#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char a[80],b[80],*result;
    int choice;
    char* (*p)(char *,char *);
    while(1)
    {
        do
        {
            printf("\t\t1 copy string.\n");
            printf("\t\t2 connect string.\n");
            printf("\t\t3 Parse string.\n");
            printf("\t\t4 exit\n");
            printf("\t\tinput a number(1-4)please!\n");
            scanf("%d",&choice);
        }while(choice<1||choice>4);
        switch(choice)
        {
            case 1:p=strcpy;break;
            case 2:p=strcat;break;
            case 3:p=strtok;break;
            case 4:goto down;
        }
        getchar();
        printf("input the first string please!\n");
        fgets(a,sizeof(a),stdin);
        printf("input the second tring please!\n");
        fgets(b,sizeof(b),stdin);
        result=p(a,b);

        printf("the result is %s\n",result);
        
    }
    down:return 0;
}
