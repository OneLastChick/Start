#include<stdio.h>
struct w{char low; char high;};
union u{struct w byte; short word;} uw;
int main() 
{  int result;uw.word=0x1234;
printf("high byte:%02x\n",uw.byte.high);
uw.byte.low=0x74;
printf("word:%04x\n",uw.word);
result=uw.word+0x2a34;
printf("result:%04x\n",result);
int define =1;
return 0;} 