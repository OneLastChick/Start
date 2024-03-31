#include <stdio.h>
int main()
{
    int N=0;
    int a,b,c;
    scanf("%d",&N);
    for(a=1;a*a<N;a++)
        for(b=1;b*b*10<N;b++)
            for(c=0;c*c<N;c++)
                {
                    if(a*a==b*b*10+c*c)
                        {
                            printf("%d ",a*a);
                        }
                }
    return 0;
}