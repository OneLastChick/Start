#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char Word1[10], Word2[10];
    scanf("%s %s", Word1, Word2); // 输入要替换的单词

	FILE *input = fopen("input.txt", "r"); // 打开文件
    FILE *output = fopen("output.txt","w");
	char s[10000], SBSBSBSBSBSBSB[10000], *p;
	char *CURRENTCHAR = s; // 当前字符指针
	int cnt = 0, count = 0; // 计数器
	while (fgets(s, 10000, input) != NULL) { // 逐行读取文件内容
		CURRENTCHAR = s; // 设置当前字符指针为行首
		while ((p = strstr(s, Word1)) != NULL) { // 查找目标单词
			if (!(*(p + strlen(Word1)) >= 'a' && *(p + strlen(Word1)) <= 'z')) {
                // 检查目标单词后是否为非字母字符
				count++; // 计数加一
				*p = '&'; // 替换目标单词
			} else {
				*p = '#'; // 标记目标单词
			}
		}
		while (CURRENTCHAR != s + strlen(s)) { // 处理当前行字符
			if (*CURRENTCHAR == '&') {
                // 如果当前字符是替换标记
				CURRENTCHAR += strlen(Word1); // 跳过目标单词
				strcat(SBSBSBSBSBSBSB + cnt, Word2); // 将替换单词追加到输出字符串
				cnt += strlen(Word2); // 更新字符计数器
			} else if (*CURRENTCHAR == '#') {
                // 如果当前字符是标记
				CURRENTCHAR += strlen(Word1); // 跳过目标单词
				strcat(SBSBSBSBSBSBSB + cnt, Word1); // 将目标单词追加到输出字符串
				cnt += strlen(Word1); // 更新字符计数器
			}
			SBSBSBSBSBSBSB[cnt++] = *CURRENTCHAR++; // 将当前字符追加到输出字符串
		}
	}
    fprintf(output,"%s ##%d modified##",SBSBSBSBSBSBSB,count);
    fclose(input); // 关闭文件
    fclose(output);

    printf("%s ##%d modified##", SBSBSBSBSBSBSB,count); // 输出修改后的字符串
    return 0;
}
