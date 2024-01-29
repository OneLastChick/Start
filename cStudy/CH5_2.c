 #include <stdio.h>
 #include <math.h>
 int digit(int n, int k)
 {
    int count = 0;
    int c = n;
    while(n!=0)
    {
        n /= 10;
        count++;
    }
    if(k>count)
    {
        return -1;
    }
    else
    {
        int result =( c / (int)pow(10,(k-1)) ) % 10;
        return result;
    }
 }
 int main(void)
 {
     int n,k;
     
     scanf("%d%d", &n, &k);
     printf("%d", digit(n,k));
     return 0;
 }
 