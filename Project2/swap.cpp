
#include"swap.h"

//����ͷ�ļ�
//���������ڱ�дͷ�ļ�ʱ������Ҫ

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
