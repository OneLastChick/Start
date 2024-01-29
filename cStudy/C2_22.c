//  将" -> \  将\ ->
#include <stdio.h>
int main()
{
    char c;
    printf("Please input a string And end with ctrl+z:\n");
    while ((c=getchar())!=EOF)
    {
        if(c='"') putchar(c);
        else if(c=='\\') printf("\\\\");
        else  putchar(c);
        
    }
    

    return 0;
}