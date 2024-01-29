#include <stdio.h>

void OutputReversearrayelements(int arr[], int n) {
    int A = 0;
    int B = n - 1;
    
    while (A < B) {
        // 交换数组两端的元素
        int C = arr[A];
        arr[A] = arr[B];
        arr[B] = C;
        
        // 移动指针以继续颠倒元素
        A++;
        B--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    
    // 调用函数颠倒数组顺序
    OutputReversearrayelements(x, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}
