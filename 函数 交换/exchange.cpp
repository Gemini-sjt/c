#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ�������������������������ֵ
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
	printf("����ǰ��a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}