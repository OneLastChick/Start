#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 1000

int main() {
    FILE *input = fopen("input.txt", "r"); // 打开input.txt文件以读取内容
    FILE *output = fopen("output.txt", "w"); // 创建或打开output.txt文件以写入内容

    if (input == NULL || output == NULL) {
        printf("cant open the file\n");
        exit(-1);
    }

    char line[Max];
    int line_number = 1;

    while (fgets(line, sizeof(line), input) != NULL) {
        if (strcmp(line, "-END-") == 0) 
        { // 如果遇到结束标志'-END-'，停止处理
            break;
        }
        fprintf(output, "%03d %s", line_number, line); // 将行号和内容写入output.txt文件
        line_number++;
    }

    fclose(input); // 关闭文件
    fclose(output);

    return 0;
}
