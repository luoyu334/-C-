#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请分别输入身高的英寸和英尺，""如输入\"5 7\"表示5 英尺7英寸:");
	double foot, inch;
	scanf("%lf %lf", &foot,&inch);
	printf("身高是%f米。\n", ((foot + inch / 12.0) * 0.3048));
	return 0;
}