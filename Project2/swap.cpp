
#include"swap.h"

//包含头文件
//上面两个在编写头文件时必须需要

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubblesort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printfarray(int* arr, int len)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "第" << i + 1 << "个元素为：" << arr[i] << endl;
	}
}
