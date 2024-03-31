
//  Created by Emo on 2023/12/1.

// #include<stdio.h>
// #define M 10
// #define N 3
// int main(void)
// {
//     int a[M], b[M]; /* 数组 a 存放圈中人的编号，数组 b 存放出圈人的编号 */
//     int i, j, k;
//     for(i = 0; i < M; i++) /* 对圈中人按顺序编号 1?M */
//         a[i] = i + 1;
//     for(i = M, j = 0; i > 1; i--){
// /* i 表示圈中人个数，初始为 M 个，剩 1 个人时结束循环；j 表示当前报数人的
// 位置 */
//         for(k = 1; k <= N; k++) /* 1 至 N 报数 */
//             if(++j > i - 1) j = 0;/* 最后一个人报数后第一个人接着报，形成一个圈
// */
//         b[M-i] = (j ? j:i); /* 将报数为 N 的人的编号存入数组 b */
//         if(j)
//             for(k = j-1; k < i-1; k++) /* 压缩数组 a，使报数为 N 的人出圈 */
//                 a[k]=a[k+1];           //Edit，将j位置往后的每个编号都向左移动
//     }
//     for(i = 0;i < M-1; i++) /* 按次序输出出圈人的编号 */
//         printf("%6d", b[i]);
//     printf("\n%6d\n", a[0]); /* 输出圈中最后一个人的编号 */
//     return 0;
// }
#include <stdio.h>
#define M 10
#define N 3

int main(void) {
    int a[M], b[M]; /* 数组 a 存放圈中人的编号，数组 b 存放出圈人的编号 */
    int i, j, k;

    for (i = 0; i < M; i++) /* 对圈中人按顺序编号 1 到 M */
        a[i] = i + 1;

    for (i = M, j = 0; i > 1; i--) {
        /* i 表示圈中人个数，初始为 M 个，剩 1 个人时结束循环；j 表示当前报数人的位置 */
        for (k = 1; k <= N; k++) { /* 1 至 N 报数 */
            if (++j > i - 1) j = 0; /* 最后一个人报数后第一个人接着报，形成一个圈 */
        }

        b[M - i] = (j ? a[j-1]:a[i-1]); /* 将报数为 N 的人的编号存入数组 b */

        if (j) {
            for (k = --j; k < i - 1; k++) { /* 从第j个位置开始向左移动元素，移除第N个人 */
                a[k] = a[k + 1];
            }
        }
    }

    for (i = 0; i < M - 1; i++) /* 按次序输出出圈人的编号 */
        printf("%6d", b[i]);

    printf("\n%6d\n", a[0]); /* 输出圈中最后一个人的编号 */
    return 0;
}

//#include <stdio.h>
//#define M 10
//#define N 3

//int main(void) {
//    int a[M], b[M]; /* 数组 a 存放圈中人的编号，数组 b 存放出圈人的编号 */
//    int i, j, k;
//
//    for (i = 0; i < M; i++) /* 对圈中人按顺序编号 1到 M */
//        a[i] = i + 1;
//
//    for (i = 0, j = 0; i < M - 1; i++) { /* i 表示出圈人数，初始为 0；j 表示当前报数人的位置 */
//        int count = 0;
//        while (count < N) { /* 1 至 N 报数 */
//            if (a[j] != 0) /* 如果这个人还在圈中 */
//                count++;
//            if (count < N && a[j] != 0) /* 如果这个人还在圈中 */
//                j = (j + 1) % M; /* 下一个人报数 */
//        }
//        b[i] = a[j]; /* 将报数为 N 的人的编号存入数组 b */
//        a[j] = 0; /* 标记此人已出圈 */
//    }
//
//    for (i = 0; i < M - 1; i++) /* 按次序输出出圈人的编号 */
//        printf("%6d", b[i]);
//    printf("\n");
//    printf("\n%6d",a[0]);
//    return 0;
//}

