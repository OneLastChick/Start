// #include <stdio.h>
// int checkEndianness()
// {
//     int num = 1;
//     unsigned *ptr = (unsigned *)&num;
//     return (int)ptr[0];
// }
// int main()
// {
//     int number=0;
//     scanf("%u",&number);
//     unsigned *start=(unsigned*)&number;
//     unsigned mask1=0xf0;
//     unsigned mask2=0x0f;
//     unsigned *end=start + sizeof(int)-1;
//     if(checkEndianness()){
//     // for(int i=sizeof(int);i>0;i--)
//     // {
//     //     unsigned high=((*start)&mask1)>>4;
//     //     unsigned low=((*start)&mask2);
//     //     printf("%X%X",high,low);
//     //     start++;
//     // }
//     for(int i=sizeof(int);i>0;i--)
//     {
//         unsigned unsigned high=((*start)&mask1)>>4;
//         unsigned low=((*start)&mask2);
//         printf("%X%X",high,low);
//         start++;
//     }
//     }
//     else
//     {
//         for(int i=sizeof(int);i>0;i--)
//     {
//         unsigned high=((*end)&mask1)>>4;
//         unsigned low=((*end)&mask2);
//         printf("%X%X",high,low);
//         end--;
//     }
//     }

// }
// #include <stdio.h>

// void displayBits(int number) {
//     unsigned unsigned *ptr = (unsigned unsigned *)&number;

//     for (int i = sizeof(int) - 1; i >= 0; i--) {
//         unsigned unsigned byte = ptr[i];

//         // 提取高4位和低4位
//         unsigned unsigned high = (byte >> 4) & 0x0F;
//         unsigned unsigned low = byte & 0x0F;

//         // 显示高4位和低4位的十六进制字符
//         printf("%X%X ", high, low);
//     }
// }

// int main() {
//     int inputNumber = 0;
//     scanf("%u", &inputNumber);
//     displayBits(inputNumber);
//     return 0;
// }


#include <stdio.h>

int checkEndianness() {
    int num = 1;
    unsigned char *ptr = (unsigned char *)&num;
    return (int)ptr[0];
}

int main() {
    int number = 0;
    scanf("%u", &number);
    unsigned char *start = (unsigned char *)&number;
    unsigned char mask1 = 0xf0;
    unsigned char mask2 = 0x0f;
    unsigned char *end = start + sizeof(int) - 1;

    if (!checkEndianness()) {
        while (end >= start) {
            unsigned char high = ((*start) & mask1) >> 4;
            unsigned char low = ((*start) & mask2);
            printf("%X%X", high, low);
            start++;
        }
    } else {
        while (end >= start) {
            unsigned char high = ((*end) & mask1) >> 4;
            unsigned char low = ((*end) & mask2);
            printf("%X%X", high, low);
            end--;
        }
    }

    return 0;
}
