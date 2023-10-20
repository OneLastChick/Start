#include <stdio.h>
int main()
{
    char c,numchar,numline;
    numchar=0;
    numline=0;
    printf("Input lines,end with ctrl+z\n");
    while((c=getchar())!=EOF)   //c=getchar  要括起来
    {
        numchar++;
        if(c=='\n')
            numline++;
    }
    printf("char:%d,",numchar);  //numchar ++去掉
    printf("line:%d,",numline); 
    return 0;
}