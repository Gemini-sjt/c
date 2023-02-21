#define _CRT_SECURE_NO_WARNINGS
//用二分法查找有序数列中某一个具体的数
#include<stdio.h>
int binsearch(int a[],int b,int c)
{
	int left = 0;
	int right = c - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (b == a[mid])
		{
			return mid;
		}
		else if (b > a[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;//没找到
}
int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
		scanf("%d", &a);
	int num = binsearch(arr, a ,sz);
	if (num != -1)
	{
		printf("找到了在第%d号位（从0开始）", num);
	}
	else
	{
		printf("该数组内无该数");
	}

		return 0;
}