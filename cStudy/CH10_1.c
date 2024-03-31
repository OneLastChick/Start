#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 1000

int main() {
    FILE *input = fopen("input.txt", "r"); // ��input.txt�ļ��Զ�ȡ����
    FILE *output = fopen("output.txt", "w"); // �������output.txt�ļ���д������

    if (input == NULL || output == NULL) {
        printf("cant open the file\n");
        exit(-1);
    }

    char line[Max];
    int line_number = 1;

    while (fgets(line, sizeof(line), input) != NULL) {
        if (strcmp(line, "-END-") == 0) 
        { // �������������־'-END-'��ֹͣ����
            break;
        }
        fprintf(output, "%03d %s", line_number, line); // ���кź�����д��output.txt�ļ�
        line_number++;
    }

    fclose(input); // �ر��ļ�
    fclose(output);

    return 0;
}
