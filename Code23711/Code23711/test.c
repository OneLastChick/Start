#define _CRT_SECURE_NO_WARNINGS 1
////第一天
//#include <stdio.h>
//
////int main()
//{
//	printf("HelloWorld");
//	return 0;
//}
//数据类型
//int main()
//{
//	char ch = 'a';
//	int age = 20;
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 70.0;
//	age = age + 2;
//	weight = weight - 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
////   %lf  double   %f float
//  int a = 100 //全局变量
//int main()              //局部变量
//{
//
//	return 0;
//}
//  //当局部变量与全局变量名字冲突的时候局部优先 不建议把局部变量与全局变量名字写成一样


//写一个代码求2个整数的和
//scanf函数是输入函数
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	int sum = 0;
//	printf("输入两个数字");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d", sum);
	return 0;
}
