//字符去重
#include <stdio.h>
#include <string.h>
void RemoveDuplicate(char *s);
int main()
{
    char str[200];
    printf("input strings,end of Ctrl+z\n");
    while((fgets(str,200,stdin))!=NULL)
    {
        RemoveDuplicate(str);
        printf("%s",str);
    }
    return 0;
}
void RemoveDuplicate(char *s) {
    int r, w, i, len;
    len = strlen(s);

    if (len <= 1) {
        return; // No duplicates to remove
    }

    for (w = 1, i = 1; w < len; w++) {
        for (r = 0; r < i; r++) {
            if (s[w] == s[r]) {
                break; 
            }
        }
        if (r == i) {
            s[i] = s[w];
            i++;
        }
    }
    s[i] = '\0';
}