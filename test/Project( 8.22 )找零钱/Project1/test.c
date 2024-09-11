#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int price1 = 0, price2=0;
	printf("请输入金额:");
	scanf("%d", &price1);
	printf("需减去:");
	scanf("%d", &price2);
	int price3 = price1 - price2;
	printf("找零:%d-%d=%d", price1,price2,price3);
	return 0;
}