#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//创建一个函数，交换输入的两个数的值
void swap(int* px, int* py)
{
	int c = *px;
	*px = *py;
	*py = c;
}
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}