#include <stdio.h>
int main()
{
    unsigned long long ip;
    while(scanf("%llu",&ip)!=EOF)
    {
        unsigned long mask=0Xff;
        unsigned int part1;
        unsigned int part2;
        unsigned int part3;
        unsigned int part4;
        part1= ip & mask;
        part2= (ip>>8) & mask;
        part3= (ip>>16) & mask;
        part4= (ip>>24) & mask;
        printf("%u.%u.%u.%u\n",part4,part3,part2,part1);
    }

}
// #include <stdio.h>
// #include <stdint.h>

// int main() {
//     uint32_t input_num;

//     while (1) {
//         printf("�������޷��ų���������ʾ��IP��ַ��");

//         if (scanf("%lu", &input_num) == EOF) {
//             break;
//         }

//         if (input_num < 0 || input_num > 4294967295) {
//             printf("������Ч��������0��4294967295֮�������\n");
//         } else {
//             uint8_t ip_parts[4];
//             for (int i = 3; i >= 0; i--) {
//                 ip_parts[i] = input_num & 255;  // ȡ��8λ
//                 input_num >>= 8;  // ����8λ
//             }

//             printf("���ʮ������ʽ��IP��ַ��: %u.%u.%u.%u\n", ip_parts[0], ip_parts[1], ip_parts[2], ip_parts[3]);
//         }
//     }

//     return 0;
// }
