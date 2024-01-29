#include <stdio.h>
int count=0;
int queen[8];
void output()
{
    printf("\nRoute %d:",count);
    for(int i=0;i<8;i++)
    {
        printf("%2d",queen[i]);
    }
}
int availavle(int curRow,int curCol)
{
    for(int row=0;row<curRow;row++)
    {
        if(curCol==queen[row])
        {
            return 0;
        }
        if((curRow-row)==(curCol-queen[row]))
        {
            return 0;
        }
        if((curRow-row)==(queen[row]-curCol))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int j=0;
    int c0,c1,c2,c3,c4,c5,c6,c7;
    for(c0=0;c0<8;c0++)
    {
        queen[0]=c0;
        for(c1=0;c1<8;c1++)
        {
            if(!availavle(1,c1)) continue;
            queen[1]=c1;
            for(c2=0;c2<8;c2++)
            {
                if(!availavle(2,c2)) continue;
                queen[2]=c2;
                for(c3=0;c3<8;c3++)
                {
                    if(!availavle(3,c3)) continue;
                    queen[3]=c3;
                    for(c4=0;c4<8;c4++)
                    {
                        if(!availavle(4,c4)) continue;
                        queen[4]=c4;
                        for(c5=0;c5<8;c5++)
                        {
                            if(!availavle(5,c5)) continue;
                            queen[5]=c5;
                            for(c6=0;c6<8;c6++)
                            {
                                if(!availavle(6,c6)) continue;
                                queen[6]=c6;
                                for(c7=0;c7<8;c7++)
                                {
                                    if(!availavle(7,c7)) continue;
                                    queen[7]=c7;
                                    count++;
                                    output();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}