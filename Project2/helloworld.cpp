#include<iostream>
#include<string>
#include<ctime>//ʱ����ļ�����time�ĵ����й�
#include<math.h>
using namespace std;
#define Day 7  //ȫ�ֳ���
int main()
{
	//int a = 10;
	//a = 100;
	//a += 10;
	//a -= 9;
	//a *= 10;
	//a /= 2;
	//a %= 4;
	//cout << "a = " << a << endl;

	//int a = 10;
	//int b = 10;
	//int c = 0;
	//c = a < b;
	//c = a == b;
	//c = a > b;
	//c = a != b;
	//c = a >= b;
	//c = a <= b;
	//cout << "c = " << c << endl;

 //   int a = 10;
	//int b = 0;
	//cout << !a << endl;
	//cout << !!a << endl;
	//cout << (a && b) << endl;
	//cout << (a || b) << endl;

	//if���
	//int a;
	//cout << "�������ĸ߿��ɼ��� " << endl;
	//cin >> a;
	//cout << "���ĸ߿��ɼ�Ϊ�� " << a << endl;

	//if (a > 600)//if�����治���зֺ�
	//{
	//	if (a > 700)
	//	{
	//		cout << "�����Կ����廪��ѧ" << endl;
	//	}
	//	else if (a > 650)
	//	{
	//		cout << "�����Կ��뱱����ѧ" << endl;
	//	}
	//	else
	//	{
	//		cout << "�����Կ����˴�" << endl;
	//	}

	//}
	//else if (a <= 600 && a >= 500)
	//{
	//	cout << "�����Կ��϶���" << endl;
	//}
	//else
	//{
	//	cout << "�����ܿ��϶���" << endl;
	//}
    
	//С�����
	//int w_a, w_b, w_c;
	//cout << "��ֱ���������С��A, B, C��������" << endl;
	//cin >> w_a >> w_b >> w_c;
	//cout << "A, B, C��ֻС��������ֱ�Ϊ��" << w_a << "\n" << w_b << "\n" << w_c << endl ;
	//if (w_a >= w_b && w_a >= w_c)
	//{
	//	cout << "AС�����أ�������Ϊ��" << w_a << endl;
	//}
	//else if (w_b >= w_a && w_b >= w_c)
	//{
	//	cout << "BС�����أ�������Ϊ��" << w_b << endl;
	//}
	//else
	//{
	//	cout << "CС�����أ���������Ϊ��" << w_c << endl;
	//}


	////��Ŀ�����
	//int a, b, c;
	//cout << "������a��b��ֵ��" << endl;
	//cin >> a >> b;
	//c = (a > b ? a : b);//��Ŀ����������a > b���������һ�����ʽ�����a <= b, ������ڶ������ʽ
	////��c++����Ŀ��������ص��Ǳ������Ը�ֵ
	//(a > b ? a : b) = 100;
	//cout << "c ��ֵΪ��" << c <<"\na = "<< a <<"\nb = "<< b << endl;

	//switch��� �ṹ��������ִ��Ч�ʸ�

	//int score;
	//cout << "�����Ӱ��֣�" << endl;
	//cin >> score;
	//cout << "����ķ�Ϊ��" << score << endl;
	//switch (score) //����score ��ֵ������ת
	//{
	//case 10:
	//	cout << "����Ϊ�Ǿ����Ӱ" << endl; 
	//	break;
	//case 9:
	//	cout << "����Ϊ�Ǿ����Ӱ" << endl;
	//	break;
	//case 8:
	//	cout << "����Ϊ����ͨ��Ӱ" << endl; 
	//case 7:
	//	cout << "����Ϊ����ͨ��Ӱ" << endl;
	//	break;
	//default:
	//	cout << "����Ϊ����Ƭ" << endl; 
	//	break;
	//}

	////ѭ�����while
	//int num = 0;
	//while (num <= 9)
	//{
	//	cout << num++ << endl;//ǰ�õ������Ƚ��м�һ�ڽ��б��ʽ���㣻�����෴
	//}

	////���� ������
	//srand((unsigned int)time(NULL));
	//int a = rand() % 100 + 1;
	//int val;
	//cout << "��²�0��100���һ�����֣�" << endl;
	//cin >> val;
	//cout << "�����������Ϊ��" << val << endl;
	//while (val != a)
	//{
	//	if (val > a)
	//	{
	//		cout << "����������ֹ������������룺" << endl;
	//	}
	//	else
	//	{
	//		cout << "���²�����ֹ�С�����������룺" << endl;
	//	}
	//    cin >> val;
	//	cout << "�����������Ϊ��" << val << endl;
	//	//break ����ֱ������ѭ����
	//}
	//cout << "��������������֣����������:" << val << endl;

	////do while ѭ����� ���while��䣬�Ƚ���һ��ѭ�����ж�
	//int a = 0;
	//do
	//{
	//	cout << a++ << endl;
	//} 
	//while (a < 10);

	////do while Ѱ�ҳ����е�ˮ�ɻ��� 
	//int num = 100, num_a, num_b, num_c, sum;
	//cout << "��λ���е�ˮ�ɻ����У�" << endl;
	//do
	//{
	//	num_a = num / 100; //���λ
	//	num_b = (num - num_a * 100) / 10; //��ʮλ
	//	num_c = num % 10; //���λ
	//	sum = pow(num_a, 3) + pow(num_b, 3) + pow (num_c, 3); //��ˮ�ɻ���
	//	if (num == sum)
	//	{
	//		cout << sum << endl;
	//	}
	//	num++;
	//} 
	//while (num < 1000);

	////forѭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	////������ 
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
	//	{
	//		cout << "������" << endl;
	//	}
	//	else
	//	{
	//		cout << i << endl;
	//	}
	//}

	



	system("pause");
	return 0;
}