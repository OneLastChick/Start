#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char Word1[10], Word2[10];
    scanf("%s %s", Word1, Word2); // ����Ҫ�滻�ĵ���

	FILE *input = fopen("input.txt", "r"); // ���ļ�
    FILE *output = fopen("output.txt","w");
	char s[10000], SBSBSBSBSBSBSB[10000], *p;
	char *CURRENTCHAR = s; // ��ǰ�ַ�ָ��
	int cnt = 0, count = 0; // ������
	while (fgets(s, 10000, input) != NULL) { // ���ж�ȡ�ļ�����
		CURRENTCHAR = s; // ���õ�ǰ�ַ�ָ��Ϊ����
		while ((p = strstr(s, Word1)) != NULL) { // ����Ŀ�굥��
			if (!(*(p + strlen(Word1)) >= 'a' && *(p + strlen(Word1)) <= 'z')) {
                // ���Ŀ�굥�ʺ��Ƿ�Ϊ����ĸ�ַ�
				count++; // ������һ
				*p = '&'; // �滻Ŀ�굥��
			} else {
				*p = '#'; // ���Ŀ�굥��
			}
		}
		while (CURRENTCHAR != s + strlen(s)) { // ����ǰ���ַ�
			if (*CURRENTCHAR == '&') {
                // �����ǰ�ַ����滻���
				CURRENTCHAR += strlen(Word1); // ����Ŀ�굥��
				strcat(SBSBSBSBSBSBSB + cnt, Word2); // ���滻����׷�ӵ�����ַ���
				cnt += strlen(Word2); // �����ַ�������
			} else if (*CURRENTCHAR == '#') {
                // �����ǰ�ַ��Ǳ��
				CURRENTCHAR += strlen(Word1); // ����Ŀ�굥��
				strcat(SBSBSBSBSBSBSB + cnt, Word1); // ��Ŀ�굥��׷�ӵ�����ַ���
				cnt += strlen(Word1); // �����ַ�������
			}
			SBSBSBSBSBSBSB[cnt++] = *CURRENTCHAR++; // ����ǰ�ַ�׷�ӵ�����ַ���
		}
	}
    fprintf(output,"%s ##%d modified##",SBSBSBSBSBSBSB,count);
    fclose(input); // �ر��ļ�
    fclose(output);

    printf("%s ##%d modified##", SBSBSBSBSBSBSB,count); // ����޸ĺ���ַ���
    return 0;
}
