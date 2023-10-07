//奇怪的算式  ABCDE*?=EDCBA        ABCDE ?代表某个数字  求解 ABCDE ?
#include<stdio.h>
int main()           //思路: (10000*A+1000*B+100*C+10*D+E)*F=10000XE+1000*D+100*C+10*B+A
{
    int A,B,C,D,E,F;
    for(A=1;A<=9;A++)
    {
        for(B=1;B<=9;B++)
        {
        if(A-B==0) continue;
            for(C=1;C<=9;C++)
            {
            if(B-C==0) continue;
                for(D=1;D<=9;D++)      // ABCDE 是不同数字的判断有点难  最简单的还是枚举
                {
                    if(C-D==0) continue;
                    for(E=1;E<=9;E++)
                    {
                      if(D-E==0)  continue;
                      for(F=1;F<=9;F++)
                           { 
                            if((10000*A+1000*B+100*C+10*D+E)*F==10000*E+1000*D+100*C+10*B+A)
                                printf("A=%d B=%d C=%d D=%d E=%d F=%d\n",A,B,C,D,E,F);
                           }
                    }
                }
            }
        }
    }
    return 0;
}