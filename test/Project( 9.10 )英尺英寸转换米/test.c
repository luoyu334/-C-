#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("��ֱ�������ߵ�Ӣ���Ӣ�ߣ�""������\"5 7\"��ʾ5 Ӣ��7Ӣ��:");
	double foot, inch;
	scanf("%lf %lf", &foot,&inch);
	printf("�����%f�ס�\n", ((foot + inch / 12.0) * 0.3048));
	return 0;
}