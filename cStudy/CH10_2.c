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
//     //统计字符
//     int chars=0;
//     int wordss=0;
//     int sentences=0;
//     while((ch=fgetc(input))!=' '||(ch=fgetc(input))!='\n'||(ch=fgetc(input))!=EOF)
//     {
//         chars++;
//     }
//     //统计单词和句子
//     while((fgets(words,sizeof(words),input))!=' '||'.'||'?'||',')

// }
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("无法打开文件\n");
        return 1;
    }

    int char_count = 0;
    int word_count = 0;
    int Sentences = 0;
    char c;
    int in_word = 0; // 标记是否在单词中

    while ((c = fgetc(input)) != EOF) 
    {
        if(c!=' '&&c!='\n')
        {
            char_count++;
        }

        // 判断是否处于单词中
        if (isalpha(c)) 
        {
            in_word = 1;
        } 
        else 
        {
            if (in_word)
            { // 如果不是字母但之前是单词中的字母，则说明单词结束
                word_count++;
                in_word = 0;
            }

            // 判断是否为句子结束符号
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
