#include <stdio.h>

void ScanJZ(int JZ[][4], int lie, int hang, int m, int n, int left, int right, int top, int bottom)
{
    if (left > right || top > bottom)
    {
        return;
    }
    
    // 从左到右扫描
    for (; m <= right; m++)
    {
        printf("%d ", JZ[n][m]);
    }
    top++; // 更新上边界

    // 从上到下扫描
    for (n = top; n <= bottom; n++)
    {
        printf("%d ", JZ[n][m]);
    }
    right--; // 更新右边界

    // 从右到左扫描
    if (top <= bottom)  // 检查上下边界
    {
        for (m = right; m >= left; m--)
        {
            printf("%d ", JZ[n][m]);
        }
        bottom--; // 更新下边界
    }

    // 从下到上扫描
    if (left <= right)  // 检查左右边界
    {
        for (n = bottom; n >= top; n--)
        {
            printf("%d ", JZ[n][m]);
        }
        left++; // 更新左边界
    }

    // 递归调用
    ScanJZ(JZ, lie, hang, m, n, left, right, top, bottom);
}

int main()
{
    int lie = 4;
    int hang = 0;
    scanf("%d", &hang);
    
    int JZ[hang][lie];
    
    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < lie; j++)
        {
            scanf("%d", &JZ[i][j]);
        }
    }

    int left = 0;
    int right = lie - 1;
    int top = 0;
    int bottom = hang - 1;
    int m = 0;
    int n = 0;

    ScanJZ(JZ, lie, hang, m, n, left, right, top, bottom);

    return 0;
}
