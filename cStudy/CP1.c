#include <stdio.h>
#include <math.h>
int main()
{
    
    float X1,X2,D,a,b,c;
    printf("ax^2+bx+c=0,Please input a,b,c and i will give you answer!");
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0.0)
    {D=b*b-4*a*c;
     if(D<=0)
        printf("Error1");
     else
     {
     X1=(-b+sqrt(D))/2*a; 
     X2=(-b-sqrt(D))/2*a; 
     printf("The answer is %f and %f",X1,X2);
     }
    }
     else   printf("Error2\n");
  


    return 0;
}