#include<stdio.h>
#include<string.h>
int main()
{
int v3[65] = {};
char Source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
char Destination[65] = {};
char *result;
v3[0] = 16;
v3[1] = 34;
v3[2] = 56;
v3[3] = 7;
v3[4] = 46;
v3[5] = 2;
v3[6] = 10;
v3[7] = 44;
v3[8] = 20;
v3[9] = 41;
v3[10] = 59;
v3[11] = 31;
v3[12] = 51;
v3[13] = 60;
v3[14] = 61;
v3[15] = 26;
v3[16] = 5;
v3[17] = 40;
v3[18] = 21;
v3[19] = 38;
v3[20] = 4;
v3[21] = 54;
v3[22] = 52;
v3[23] = 47;
v3[24] = 3;
v3[25] = 11;
v3[26] = 58;
v3[27] = 48;
v3[28] = 32;
v3[29] = 15;
v3[30] = 49;
v3[31] = 14;
v3[32] = 37;
v3[34] = 55;
v3[35] = 53;
v3[36] = 24;
v3[37] = 35;
v3[38] = 18;
v3[39] = 25;
v3[40] = 33;
v3[41] = 43;
v3[42] = 50;
v3[43] = 39;
v3[44] = 12;
v3[45] = 19;
v3[46] = 13;
v3[47] = 42;
v3[48] = 9;
v3[49] = 17;
v3[50] = 28;
v3[51] = 30;
v3[52] = 23;
v3[53] = 36;
v3[54] = 1;
v3[55] = 22;
v3[56] = 57;
v3[57] = 63;
v3[58] = 8;
v3[59] = 27;
v3[60] = 6;
v3[61] = 62;
v3[62] = 45;
v3[63] = 29;
result = strcpy(Destination, Source);
for (int i = 0; i <= 47; ++i)
{
for (int j = 0; j <= 63; ++j)
Source[j] = Destination[v3[j]];
result = strcpy(Destination, Source);
}
printf("%s", result);
}