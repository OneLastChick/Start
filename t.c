#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>
#define DELTA 0x9e3779b9
#define MX (((z>>5^y<<2)+(y>>3^z<<4))^((sum^y)+(key[(p&3)^e]^z)))
void btea(uint32_t* v, int n, uint32_t const key[4])
{
    uint32_t y, z, sum;
    unsigned p, rounds, e;
    if (n > 1)
    {
        rounds = 6 + 52 / n;	//这里可以说是预定义值，n=2是rounds=32
        sum = 0;
        z = v[n - 1];
        do
        {
            sum += DELTA;
            e = (sum >> 2) & 3;
            for (p = 0; p < n - 1; p++)        //注意这里的p是从0~n-1
            {
                y = v[p + 1];
                z = v[p] += MX;
            }
            y = v[0];
            z = v[n - 1] += MX;        //这里的MX中传入的p=n-1
        } while (--rounds);
    }
    else if (n < -1)
    {
        n = -n;
        rounds = 6 + 52 / n;
        sum = rounds * DELTA;
        y = v[0];
        do
        {
            e = (sum >> 2) & 3;
            for (p = n - 1; p > 0; p--)    //注意这里的p是从n-1~0,和上面是反过来的
            {
                z = v[p - 1];
                y = v[p] -= MX;
            }
            z = v[n - 1];
            y = v[0] -= MX;    //这里的MX中传入的 p=0
            sum -= DELTA;
        } while (--rounds);
    }
}
void detea(uint32_t* v, uint32_t* k) {
    uint32_t v0 = v[0], v1 = v[1], sum = 0xC6EF3720, i;
    uint32_t delta = 0x9e3779b9;
    uint32_t k0 = k[0], k1 = k[1], k2 = k[2], k3 = k[3];
    for (i = 0; i < 32; i++) {
        v1 -= ((v0 << 4) + k2) ^ (v0 + sum) ^ ((v0 >> 5) + k3);
        v0 -= ((v1 << 4) + k0) ^ (v1 + sum) ^ ((v1 >> 5) + k1);
        sum -= delta;
    }
    v[0] = v0; v[1] = v1;
}
int main()
{
    uint32_t v[8] = { 0xCFBE0F1B, 0x05F3083F, 0x4220E43B, 0x3383AFEE, 0xFA3237CE, 0xECADA66E, 0xA8D47CA7, 0xEFC51077 };
    uint32_t k[4] = { 116,114,117,101 };//true
    uint32_t fk[4] = { 0x66,0x61,0x6B,0x65 };//fake
    int i, n = 8;
    
    btea(v, -n, k);//负号是解密
    for (i = 0; i < 8; i += 2)
        detea(v + i, fk);
    printf("%s", v);//begin{not_main_is_matter!}
    return 0;
}