#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[]="abc\0";
    printf("%d",strlen(a));
}