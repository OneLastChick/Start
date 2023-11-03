#include <stdio.h>

void ScanTDA(int m, int n, int TDA[m][n], int c, int a, int d, int b) {
    // 递归终止条件  //b 是右边边界  c是下边边界  d是左边边界   a是上边边界
    if (c > a || d > b) {
        return;
    }

    // 从左到右
    for (int i = d; i <= b; i++) {
        printf("%d ", TDA[c][i]);
    }
    c++;

    // 从上到下
    for (int i = c; i <= a; i++) {
        printf("%d ", TDA[i][b]);
    }
    b--;

    // 从右到左
    if (c <= a) {
        for (int i = b; i >= d; i--) {
            printf("%d ", TDA[a][i]);
        }
        a--;
    }

    // 从下到上
    if (d <= b) {
        for (int i = a; i >= c; i--) {
            printf("%d ", TDA[i][d]);
        }
        d++;
    }

    // 递归调用
    ScanTDA(m, n, TDA, c, a, d, b);
}

int main() {
    int m, n;
    scanf("%d", &m);
    n=4;

    int TDA[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &TDA[i][j]);
        }
    }

    ScanTDA(m, n, TDA, 0, m - 1, 0, n - 1);

    return 0;
}
