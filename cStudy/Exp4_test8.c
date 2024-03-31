#include <stdio.h>
#define CHANGE 1
#ifdef CHANGE
    #if CHANGE==1
        #define Trans(char) ((char>='A'&&char<='Z')?(char-'A'+'a'):(char>='a'&&char<='z')?(char-'a'+'A'):char)
    #else
        #define Trans(char) char
    #endif
#endif
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        c=Trans(c);
        putchar(c);
    }
}