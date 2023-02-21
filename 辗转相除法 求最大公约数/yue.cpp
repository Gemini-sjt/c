#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//找出两个数的最大公约数
//辗转相除法
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	int t = 0;
	while (t = a % b)
	{
		a = b;
		b = t;
	}
	printf("%d",b);
	return 0;
}