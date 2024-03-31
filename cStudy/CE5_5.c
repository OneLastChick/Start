#include <stdio.h>
// 0 1 2 3 4 5 6
// 1 2 3 4 5 6 7 
// Input 1 2 4 6 
void swap(int a[][100], int m1, int n1, int m2, int n2, int n)
{
    for (int i = 0; i < m1; i++)
        a[1][i] = a[0][i];
    for (int i = m1; i < m1 + n2 - m2 + 1; i++)
        a[1][i] = a[0][m2 + i - m1];
    for (int i = m1 + n2 - m2 + 1; i < m1 + n2 - m2 + m2 - n1; i++)

        a[1][i] = a[0][i - m1 - n2 + m2 - 1 + n1 + 1];
    for (int i = m1 + n2 - n1; i < m1 + n2 - n1 + n1 - m1 + 1; i++)
        a[1][i] = a[0][m1 + i - m1 - n2 + n1];
    for (int i = m1 + n2 - m1 + 1; i < n; i++)
        a[1][i] = a[0][n2 + i - m1 - n2 + m1];
}

void Exchangearray(int array[], int m1, int n1, int m2, int n2, int sum)
{
    int temp[sum];
    int len1 = n1 - m1;
    int len2 = n2 - m2;
    if (len1 == len2)
    {
        for (int i = m1; i <= m2; i++)
        {
            int temp;
            temp = array[i];
            array[i] = array[i + m2 - m1];
            array[i + m2 - m1] = temp;
        }
    }
    else if (len1 < len2)
    {
        for (int i = m1; i <= n1; i++)
        {
            int temp;
            temp = array[i];
            array[i] = array[i + m2 - m1 + (n2 - m2) - (n1 - m1)];
        }
    }
}
int main()
{
    int sum = 0;
    scanf("%d", &sum);
    int m1, m2, n1, n2;
    int array[2][100];
    // 输入n个整数到数组n中
    for (int i = 0; i < sum; i++)
    {
        scanf("%d", &array[0][i]);
    }
    scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
    swap(array, m1, n1, m2, n2, sum); // m1 n1 m2 n2
    for (int i = 0; i < sum; i++)
    {
        printf("%d", array[1][i]);
        if(i<sum-1)
        {
            printf(" ");
        }
    }
    return 0;
}