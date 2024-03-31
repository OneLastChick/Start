#include <stdio.h>

#define MAX_SIZE 100

// 检查坐标是否在范围内
int isValid(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

// 计算周围的地雷格数
int countMines(char grid[MAX_SIZE][MAX_SIZE], int x, int y, int n, int m) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int count = 0;

    for (int i = 0; i < 8; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY, n, m) && grid[newX][newY] == '*') {
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char grid[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i) {
        scanf("%s", grid[i]);
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '?') {
                int count = countMines(grid, i, j, n, m);
                printf("%d", count);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
