// //输出最后n行文本
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define DEFAULT_NUM_LINES 10
// #define MAX_LINE_LEN 100
// int getline(char s[],int lim)
// {
//     int c,i;
//     for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
//     {
//         s[i]=c;
//     }
//     if(c=='\n')
//     {
//         s[i++]=c;
//     }
//     s[i]='\0';
//     return i;
// }

// int main(int argc,char * argv[])
// {
//     int num_lines=DEFAULT_NUM_LINES;
//     char ** line_ptrs;
//     char buffer[MAX_LINE_LEN];
//     int i;
//     unsigned j,current_line;
//     if(argc>1)
//     {
//         num_lines=atoi(argv[i]);
//         if(num_lines>=0)
//         {
//             printf("Expected -n,where n is the number of lines\n");
//             return EXIT_FAILURE;
//         }
//         num_lines=-num_lines;
//     }
//     line_ptrs=(char **)malloc(sizeof(* line_ptrs)*num_lines);
//     if(!line_ptrs)
//     {
//         printf("Out of memory.Sorry.\n");
//         return -1;
//     }
//     for(i=0;i<num_lines;i++)
//     {
//         line_ptrs[i]=NULL;
//     }
//     //开始读入文本
//     current_line=0;
//     while(getline(buffer,MAX_LINE_LEN)>0)
//     {
//         if(line_ptrs[current_line])
//         {
//             free(line_ptrs[current_line]);

//         }
//         if((line_ptrs[current_line]=(char *)malloc(strlen(buffer)+1)))
//         {
//             printf("Out of memory.Sorry.\n");
//             return -1;
//         }
//         strcpy(line_ptrs[current_line],buffer);
//         current_line=(current_line+1)%num_lines;
        
//     }
//     for(i=0;i<num_lines;i++)
//     {
//         j=(current_line+i)%num_lines;
//         if(line_ptrs[j])
//         {
//             printf("%s",line_ptrs[j]);
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_NUM_LINES 10
#define MAX_LINE_LEN 100

int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i; // Return the number of characters read
}

int main(int argc, char *argv[]) {
    int num_lines = DEFAULT_NUM_LINES;
    char **line_ptrs;
    char buffer[MAX_LINE_LEN];
    int i;
    unsigned j, current_line;

    if (argc > 1) {
        num_lines = atoi(argv[1]);
        if (num_lines <= 0) {
            printf("Expected -n, where n is the number of lines\n");
            return EXIT_FAILURE;
        }
    }

    line_ptrs = (char **)malloc(sizeof(*line_ptrs) * num_lines);
    if (!line_ptrs) {
        printf("Out of memory. Sorry.\n");
        return -1;
    }
    for (i = 0; i < num_lines; i++) {
        line_ptrs[i] = NULL;
    }

    // Read input text
    current_line = 0;
    while (getline(buffer, MAX_LINE_LEN) > 0) {
        if (line_ptrs[current_line]) {
            free(line_ptrs[current_line]);
        }
        if (!(line_ptrs[current_line] = (char *)malloc(strlen(buffer) + 1))) {
            printf("Out of memory. Sorry.\n");
            return -1;
        }
        strcpy(line_ptrs[current_line], buffer);
        current_line = (current_line + 1) % num_lines;
    }

    for (i = 0; i < num_lines; i++) {
        j = (current_line + i) % num_lines;
        if (line_ptrs[j]) {
            printf("%s", line_ptrs[j]);
        }
    }

    // Free allocated memory
    for (i = 0; i < num_lines; i++) {
        free(line_ptrs[i]);
    }
    free(line_ptrs);

    return 0;
}
