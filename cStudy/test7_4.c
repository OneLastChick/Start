//收取税金计算器
#include <stdio.h>
float CountTax1(float x)
{
    if(x<1000&&x>=0)
    {
        return 0;
    }
    else if(x<2000)
    {
        return (x-1000)*0.05;
    }
    else if(x<3000)
    {
        return 50+(x-2000)*0.1;
    }
    else if(x<4000)
    {
        return 50+100+(x-3000)*0.15;
    }
    else if(x<5000)
    {
        return 50+100+150+(x-4000)*0.2;
    }
    else
    {
        return 50+100+150+200+(x-5000)*0.25;
    }

}
float CountTax2(float x)
{
    switch ((int)(x/1000))
    {
        case 0:
            return 0;
        case 1:
            return (x-1000)*0.05;
        case 2:
            return 50+(x-2000)*0.1;
        case 3:
            return 50+100+(x-3000)*0.15;
        case 4:
            return 50+100+150+(x-4000)*0.2;
        default:
            return 50+100+150+200+(x-5000)*0.25;
    }
}

int main()
{
    float money=0;
    scanf("%f",&money);
    float a=CountTax1(money);
    float b=CountTax2(money);
    printf("%f\n",a);
    printf("%f",b);
}