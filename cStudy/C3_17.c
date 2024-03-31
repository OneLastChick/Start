//打印杨辉三角
#include <stdio.h>

// 计算杨辉三角的值
int calculateBinomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return calculateBinomialCoefficient(n - 1, k - 1) + calculateBinomialCoefficient(n - 1, k);
    }
}

// 打印杨辉三角
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        // 打印每行前面的空格
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        // 打印当前行的数值
        for (int j = 0; j <= i; j++) {
            int coef = calculateBinomialCoefficient(i, j);
            printf("%4d", coef);
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Please input you line: ");
    scanf("%d", &n);

    printPascalTriangle(n);

    return 0;
}