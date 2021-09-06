
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