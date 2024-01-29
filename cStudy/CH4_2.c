#include <stdio.h>
#include <math.h>
int main()
{
    double result=0;
    for(int i=1;fabs(1.0/(2*i-1))>1e-5;i++)
    {
        if(i%2 == 0)
        {
            result -= 1.0/(2*i-1);
        }
        else
            result += 1.0/(2*i-1);
    }
    printf("%f",4*result);
    return 0;
}