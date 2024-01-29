#include <stdio.h>
int main()
{
    char a[][5]   = {"HUST", "MORE"},*pstr=&a[0][0]+1; 
    printf("%c",*(a[0]+5));
}