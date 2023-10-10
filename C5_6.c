// //将字符串转换为双精度浮点数
// //浮点数的一般形式 []整数部分[.][小数部分][e+n]
// #include<stdio.h>
// #include<ctype.h>
// double atof(char s[])
// {
//     double val,power;
//     int exp,sign,i=0;
//     while(isspace(s[i])) i++;        //跳过前导空白符
//     sign=(s[i]=='-')?-1:1;
//     if(s[i]=='+'||s[i]=='-') i++;    //处理符号
//     for(val=0;isdigit(s[i]);i++)
//         val=10*val+(s[i]-'0');    //处理整数部分
//     if(s[i]=='.')        //处理小数
//         for(i++,power=0.1;isdigit(s[i]);i++,power *= 0.1)
//     val*=sign;        //处理指数
//     if(s[i]=='e'||s[i]=='E')       
//     {
//         i++;
//         power=(s[i]=='-')?0.1:10;
//         if(s[i]=='+'||s[i]=='-') i++;
//         for(exp=0;isdigit(s[i]);i++)
//             exp=exp*10+(s[i]-'0');
//             while(exp--) val *= power;
//     }
//     return val;
// }

// int main()
// {
//     char str[6];
//     printf("Please input float string:\n");
//     while(scanf("%s",str)!=EOF)
//     printf("%f\n",atof(str));
//     return 0;
// }
#include <stdio.h>
#include <ctype.h>

double atof(char s[]) {
    double val, power;
    int exp, sign, i = 0;
    
    while (isspace(s[i]))
        i++; // 跳过前导空白符
    
    sign = (s[i] == '-') ? -1 : 1;
    
    if (s[i] == '+' || s[i] == '-')
        i++; // 处理符号
    
    for (val = 0; isdigit(s[i]); i++)
        val = 10 * val + (s[i] - '0'); // 处理整数部分
    
    if (s[i] == '.') {
        i++; // 处理小数
        for (power = 0.1; isdigit(s[i]); i++, power *= 0.1)
            val += (s[i] - '0') * power;
    }
    
    val *= sign; // 处理符号
    
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
        power = (s[i] == '-') ? 0.1 : 10;
        
        if (s[i] == '+' || s[i] == '-')
            i++;
        
        for (exp = 0; isdigit(s[i]); i++)
            exp = exp * 10 + (s[i] - '0');
        
        while (exp--)
            val *= power;
    }
    
    return val;
}

int main() {
    char str[50]; // 增加数组大小以容纳更长的输入
    
    printf("Please input float string:\n");
    
    while (fgets(str, sizeof(str), stdin) != NULL) { // 使用fgets读取一整行
        printf("%f\n", atof(str));
    }
    
    return 0;
}
