#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ҳ������������Լ��
//շת�����
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