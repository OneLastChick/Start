
// // #include <stdio.h>

// #include <stdio.h>
// #include <stdint.h>

// // ����һ���꣬���ڻ�ȡ x �ĵ� m λ��ʼ����� n λ
// // #define GET_BITS(x, m, n) ((x >> m) & ((1 << n) - 1))

// // int main() {
// //     uint16_t x;
// //     int m, n;

// //     // ����ʮ�������޷��Ŷ����� x
// //     printf("������һ��ʮ�����Ƶ��޷��Ŷ����� x: ");
// //     if (scanf("%hx", &x) != 1) {
// //         printf("��Ч����\n");
// //         return 1;
// //     }

// //     // ���� m �� n
// //     printf("������ m (0 �� m �� 15): ");
// //     if (scanf("%d", &m) != 1 || m < 0 || m > 15) {
// //         printf("m ��ֵ��Ч\n");
// //         return 1;
// //     }

// //     printf("������ n (1 �� n �� %d): ", 16 - m);
// //     if (scanf("%d", &n) != 1 || n < 1 || n > 16 - m) {
// //         printf("n ��ֵ��Ч\n");
// //         return 1;
// //     }

// //     // ��ȡ�����������λ
// //     uint16_t result = GET_BITS(x, m, n) << (15 - m);

// //     // ������
// //     printf("���: 0x%04x\n", result);

// //     return 0;
// // }
// // int main()
// // {
// //     printf("%d",sizeof(unsigned short));
// //     return 0;
// // }
// #include <stdio.h>

// // int main() {
// //     unsigned short x;
// //     int m, n;

// //     // ����x��m��n
// //     printf("������һ��ʮ�����Ƶ��޷��Ŷ�����x: ");
// //     scanf("%hx", &x);
// //     printf("������m��0 �� m �� 15��: ");
// //     scanf("%d", &m);
// //     printf("������n��1 �� n �� %d��: ", 16 - m);
// //     scanf("%d", &n);

// //     // ���m��n�ķ�Χ
// //     if (m < 0 || m > 15 || n < 1 || n > (16 - m)) {
// //         printf("m��n�ķ�Χ������Ҫ��\n");
// //         return 1;
// //     }

// //     // ȡ��ָ��λ���Ķ�����
// //     unsigned short result = (x >> (15 - m - n + 1)) & ((1 << n) - 1);

// //     // ������
// //     printf("���Ϊ��0x%x\n", result);

// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>

// // // ����һ������������ȡ��x�Ķ������´ӵ�mλ��ʼ�����nλ�������������λ
// // unsigned short extract(unsigned short x, unsigned short m, unsigned short n) {
// //     // ���m��n�ķ�Χ��������Ϸ�������0
// //     if (m > 15 || n > 16 - m || n < 1) {
// //         printf("�����m��n���Ϸ�\n");
// //         return 0;
// //     }
// //     // ��һ������mask����x�ĵ�mλ����m+n-1λ����������λ��Ϊ0
// //     unsigned short mask = (1 << n) - 1; // mask�ĵ�nλΪ1������Ϊ0
// //     mask = mask << (16 - m - n); // ��mask��������mλ����m+n-1λ
// //     x = x & mask; // ��x��mask��λ�룬�õ�x�ĵ�mλ����m+n-1λ
// //     // ��x���������λ
// //     x = x << (m + n - 1);
// //     return x;
// // }

// // int main() {
// //     unsigned short x, m, n; // �����޷��Ŷ�����x, m, n
// //     printf("������ʮ�����Ƶ��޷��Ŷ�����x��\n");
// //     scanf("%hx", &x); // ��ʮ����������x��ֵ
// //     printf("������ʮ���Ƶ��޷��Ŷ�����m��n��0 �� m �� 15, 1 �� n �� 16-m����\n");
// //     scanf("%hu %hu", &m, &n); // ��ʮ��������m��n��ֵ
// //     unsigned short result = extract(x, m, n); // ����extract�������õ����
// //     printf("����ǣ�\n");
// //     printf("%04hx\n", result); // ��ʮ��������������������λ����
// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// // ����һ������������ȡ��x�Ķ������´ӵ�mλ��ʼ�����nλ����ʹ������˿���
// unsigned short extract(unsigned short x, int m, int n) {
//     // ���m��n�ķ�Χ��������Ϸ�������0
//     if (m < 0 || m > 15 || n < 1 || n > 16 - m) {
//         return 0;
//     }
//     // ��x����mλ���õ��ӵ�mλ��ʼ��nλ
//     x = x >> m;
//     // ��x����16-nλ��ʹ������˿���
//     x = x << (16 - n);
//     // ���ؽ��
//     return x;
// }

// int main() {
//     // �������x, m, n
//     unsigned short x;
//     int m, n;
//     // ����x, m, n��ֵ
//     printf("������ʮ�����Ƶ��޷��Ŷ�����x: ");
//     scanf("%hx", &x);
//     printf("������ʮ���Ƶ�����m��n: ");
//     scanf("%d%d", &m, &n);
//     // ���ú���extract���õ����
//     unsigned short result = extract(x, m, n);
//     // ��ʮ������������
//     printf("�����: %04hx\n", result);
//     // �˳�����
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     unsigned short x;
//     int m,n;
//     scanf("%hx %d %d",&x,&m,&n);
//     if(m>=0&&m<=15&&n>=1&&n<=(16-m))
//     {
//         x = x >> m;
//         x = x << (16-n);

        
//         printf("%hx",x);
//     }
//     else
//     {
//         printf("error");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    unsigned short x;
    int m,n;
    scanf("%x %d %d",&x,&m,&n);
    if(m>=0&&m<=15&&n>=1&&n<=(16-m))
    {
        unsigned short mask=0xffff;
        unsigned short result=0;
        mask = mask << n;
        x = x >> m;
        result =(x & (~mask))   <<  (16 -n);
        printf("%x",result);
    }
    return 0;
}
