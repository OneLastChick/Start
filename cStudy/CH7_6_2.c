#include <stdio.h>

void ScanTDA(int m, int n, int TDA[m][n]) {
    int c = 0, a = m - 1, d = 0, b = n - 1;

    while (c <= a && d <= b) {
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
    }
}

int main() {
    int m, n;
    scanf("%d", &m);
    n = 4;

    int TDA[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &TDA[i][j]);
        }
    }

    ScanTDA(m, n, TDA);

    return 0;
}
