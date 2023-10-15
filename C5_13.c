//将十进制字符串转换成long类型
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>

long atol(const char s[]) {
    int i, sign = 0;
    long result = 0, last = 0;

    errno = 0; // 重置 errno 以表示成功
    i = 0;

    while (isspace(s[i])) i++;
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') sign = 1;
        i++;
    }

    for (result = 0; isdigit(s[i]); i++) {
        last = result;
        result = 10 * result + (s[i] - '0');
        if (result / 10 != last) {
            errno = ERANGE;
            return (sign == 1) ? LONG_MIN : LONG_MAX;
        }
    }

    return (sign == 1) ? -result : result;
}

int main() {
    long a = atol("-12345");
    if (errno == ERANGE) {
        printf("Out of range\n");
    } else {
        printf("a=%ld\n", a);
    }
    return 0;
}
