#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	for (int i = 0;i < sz - 1;i++)
	{
		for (int j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}
int main()
{
	int arr[9] = {0,1,22,3,6,90,67,88,527};
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0;i < 9 ;i++) 
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}