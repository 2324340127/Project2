
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