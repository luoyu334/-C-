/*
02-0. 整数四则运算(10)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
乔林（清华大学）
本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。

输入格式：

输入在一行中给出2个正整数A和B。

输出格式：

在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。

输入样例：
3 2
输出样例：
3 + 2 = 5
3 - 2 = 1
3 * 2 = 6
3 / 2 = 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d + %d = %d\n", A, B, A + B);
	printf("%d - %d = %d\n", A, B, A - B);
	printf("%d * %d = %d\n", A, B, A * B);
	printf("%d / %d = %d", A, B, A / B);
	return 0;
}