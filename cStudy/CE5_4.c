//车厢座位分配问题
// #include <stdio.h>
// int Chair[5][20];  //Chair全局变量自动初始化为0
//row:20
//col:5  A  B  C  D   E   数组的下标可默认为 座位的昵称
//0代表空座  1代表座已满
//原则1：如果购得的票能安排在同一排相邻座位则安排在相邻座位
//原则2：否则安排在编号最小的几个空座位(不考虑是否相邻)
// void BuyTickets

// int main()
// {
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i, j, t, m;
    int a[100];
    int b[20] = {0};
    char sbzuoweihao[5]={'A','B','C','D','F'};
    scanf("%d", &n); // 读入购票人数
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); // 读入每个购票人的购票数量
    }
    for (i = 0; i < n; i++) 
    { // 依次处理每个购票人的购票请求
        m = a[i]; // m表示第i个人购票数
        for (j = 0; j < 20; j++) 
        { // 从第一排到第20排依次尝试安排座位
            if (m <= 5 - b[j]) 
            { // 如果这几张票能安排在同一排相邻座位
                for (t = b[j]; t < b[j] + m; t++) 
                { // 输出座位号
                    printf("%d%c", j+1,sbzuoweihao[t]); //j*5+t+1
                    if(t<b[j]+m-1)
                    {
                        printf(" ");
                    }
                }
                b[j] = b[j] + m; // 更新座位占用情况
                m = 0;
                break;
            }
        }
        if (m > 0) { // 如果没有连座
            for (j = 0; j < 20; j++) { // 从第一排到第20排依次尝试安排座位
                while (b[j] < 5 && m > 0) { // 在第j排中找到连续的m个空座位
                    printf("%d%c ",j+1,sbzuoweihao[b[j]]); // 输出座位号
                    b[j]++;
                    m--;
                }
            }
        }
       if(i<n-1)
       {
        printf("\n");
       }
    }
    return 0;
}
