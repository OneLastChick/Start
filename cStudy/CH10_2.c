// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// int main()
// {
//     FILE*input=fopen("input.txt","r");
//     FILE*output=fopen("output.txt","w");
//     char ch;
//     char words[20];
//     if(input==NULL||output==NULL)
//     {
//         printf("cant open the file\n");
//         exit(-1);
//     }
//     //ͳ���ַ�
//     int chars=0;
//     int wordss=0;
//     int sentences=0;
//     while((ch=fgetc(input))!=' '||(ch=fgetc(input))!='\n'||(ch=fgetc(input))!=EOF)
//     {
//         chars++;
//     }
//     //ͳ�Ƶ��ʺ;���
//     while((fgets(words,sizeof(words),input))!=' '||'.'||'?'||',')

// }
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("�޷����ļ�\n");
        return 1;
    }

    int char_count = 0;
    int word_count = 0;
    int Sentences = 0;
    char c;
    int in_word = 0; // ����Ƿ��ڵ�����

    while ((c = fgetc(input)) != EOF) 
    {
        if(c!=' '&&c!='\n')
        {
            char_count++;
        }

        // �ж��Ƿ��ڵ�����
        if (isalpha(c)) 
        {
            in_word = 1;
        } 
        else 
        {
            if (in_word)
            { // ���������ĸ��֮ǰ�ǵ����е���ĸ����˵�����ʽ���
                word_count++;
                in_word = 0;
            }

            // �ж��Ƿ�Ϊ���ӽ�������
            if (c == '.' || c == '!' || c == '?')
             {
                Sentences++;
            }
        }
    }

    fprintf(output, "Characters: %d\n", char_count);
    fprintf(output, "Words: %d\n", word_count);
    fprintf(output, "Sentences: %d\n", Sentences);

    fclose(input);
    fclose(output);

    return 0;
}
