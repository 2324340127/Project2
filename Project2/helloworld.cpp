#include<iostream>
#include<string>
#include<ctime>//ʱ����ļ�����time�ĵ����й�
#include<math.h>
#include"swap.h"//��������������Լ���д��ͷ�ļ�
using namespace std;
#define Day 7  //ȫ�ֳ���

//�����Ķ���
//�﷨
//����ֵ����
//���������ʱ�� num1 �� num2 ������ʵ���ݣ�ֻ���β�
//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}

//���庯����ʵ���������ֽ��н���
//void swap(int num1, int num2)
//{
//	cout << "����ǰ��" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;//����ǰ
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "����ǰ��" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;//������
//	//����Ҫreturn
//
//}



////����������ʽ��
////1���޲��޷�
//void test01()
//{
//	cout << "this is test01" << endl;
//}
////2���в��޷�
//void test02(int a)
//{
//	cout << "this is test02 a = " << a << endl;
//}
////3���޲��з�
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 1000;
//}
////4���в��з�
//int test04(int a)
//{
//	cout << "this is test04 a = " << a << endl;
//	return a;
//}

//����������
////�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ
////��ǰ���߱����������Ĵ��ڣ��������ú���������,
////�����ڽ�������������������ĺ���
////���ββ�һ��Ҫ���
////��������д��Σ�����ֻ��дһ�Σ�
//
//int max(int c, int b);//��ʱ�β���c;�����β���a;

//�����ķ��ļ���д
//ʵ���������ֽ����ĺ���

//����������

//void swap(int a, int b);

//�����Ķ���

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1������.h��׺����ͷ�ļ�
//2������.cpp��׺����Դ�ļ�
//3����ͷ�ļ���д����������
//4����Դ�ļ���д�����Ķ���

int main()
{
	//int a = 10;
	//int b = 20;
	//swap(a, b);
	////��������ֵ�ô���ʱ�򣬺������βη����ı䣬������Ӱ��ʵ��
	////������Ĳ��������ᷢ���仯��Ҳ����a��b�����
	//cout << a << "\n" << b << endl;
	//cout << add(1, 2) << endl;

	////�޲��޷�����
	//test01();
	////�в��޷�����
	//test02(1);
	////�޲��з�����
	//int a = test03();
	//cout << "num1 = " << a << endl;
	////�в��з�����
	//int b = test04(5);
	//cout << "num2 =" << b << endl;

	//int a = 10;
	//int b = 20;
	//cout << max(a, b) << endl;

	//int a = 10;
	//int b = 20;
	//swap(a, b);

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

	///forѭ��
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

	////Ƕ��ѭ��
	//for (int i = 1; i <= 10; i++)
	//{
	//	for (int j = 1; j <= 10; j++)
	//	{
	//		cout << "* " ;
	//	}
	//	cout << endl;
	//}

	////�˷��ھ���
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "x" << i << "=" << i * j << '\t';
	//	}
	//	cout << endl;
	//}

	////break ����ʹ��ʱ�� ���������һ��ѭ��
	//cout << "��ѡ�񸱱��Ѷȣ�" << endl;
	//cout << "1����ͨ\n2���е�\n3������" << endl;
	//int select = 0;
	//cin >> select;
	//switch(select)
	//{
	//case 1:
	//	cout << "���ѽ�����ͨ�Ѷ�" << endl;
	//	break;
	//case 2:
	//	cout << "���ѽ����е��Ѷ�" << endl;
	//	break;
	//case 3:
	//	cout << "���ѽ��������Ѷ�" << endl;
	//	break;
	//default:
	//	break;
	//}

	//for (int i = 0; i <= 9; i++)
	//{
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}
	//

	//for (int i = 0; i <= 9; i++)
	//{
	//	for (int j = 0; j <= 9; j++)
	//	{
	//		if (j == 5)
	//		{
	//			break;//�˳��ڲ�ѭ��
	//		}
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	////continue��� ִ�е����о�������һ��ѭ��������һ��ѭ��
	//for (int i = 0; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;//Ϊż��ʱ����������䣬���������������һ��ѭ����
	//	}
	//	cout << i << endl;
	//}

	////goto ����ܲ��þͲ���
	//
	//goto FLAG;
	//cout << "1�� " << endl;
	//FLAG://�����Ƿֺ�
	//cout << "2�� " << endl;


	////����
	//int arr[5];
	//int arr2[5] = { 1,2,3 };//δд��Ԫ����0���
	//int arr3[] = { 1,2,5,6,8,9 };//ά�������ݵ���������
	//for (int i = 0; i <= 4; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int j = 0; j <= 4; j++)
	//{
	//	cout << arr3[j] << endl;
	//}

	////ͨ��������ͳ����������ռ�õ��ڴ��С
	////ͨ���������鿴������׵�ַ
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	//cout << "ÿ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	//cout << "�����е�Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "������׵�ַΪ��" << (int)arr << endl;
	//cout << "����ĵ�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	//cout << "����ĵڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	////��ֻС������ز���������
	//int arr[5];
	//int max = 0;
	//cout << "��������ֻС������طֱ�Ϊ��" << endl;
	//for (int i = 0; i <= 4; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i <= 4; i++)
	//{
	//	for (int j = i; j <= 4; j++)
	//	{
	//		if (arr[j] >= max)
	//		{
	//			max = arr[j];
	//			arr[j] = arr[i];
	//			arr[i] = max;
	//		}
	//	}
	//	max = 0;
	//}
	//cout << "��������Ϊ" << endl;
	//for (int k = 0; k <= 4; k++)
	//{
	//	cout << arr[k] << endl;
	//}

	////����Ԫ������
	//int arr[] = {1, 2, 3, 4, 5};
	//int start = 0;
	//int end = sizeof(arr) / sizeof(arr[0])-1;
	//int temp;
	//while (start <= end)
	//{
	//	temp = arr[start];
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//	start++;
	//	end--;
	//}
	//end = sizeof(arr) / sizeof(arr[0]) - 1;
	//for (int i = 0; i <= end; i++)
	//{
	//	cout << arr[i] << '\t' << endl;
	//}
	
	////ð������
	//int arr[5];
	//int max = 0;
	//int temp;
	//cout << "��������ֻС������طֱ�Ϊ��" << endl;
	//for (int i = 0; i <= 4; i++)
	//{
	//	cin >> arr[i];
	//}

	//for (int i = 0; i <= 4; i++)
	//{
	//	for (int j = 0; j < 4 - i; j++)
	//	{
	//		if (arr[j] < arr[j + 1])
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//cout << "С�����������Ϊ��" << endl;
	//for (int i = 0; i <= 4; i++)
	//{
	//	cout << arr[i] << '\t';
	//}
	
	//��ά����Ķ��巽ʽ
	//int arr[2][3];
	//arr[0][0] = 10;
	//arr[0][1] = 10;
	//arr[0][2] = 20;
	//arr[1][0] = 50;
	//arr[1][1] = 40;
	//arr[1][2] = 60;

	//��ά����������;
	//�鿴�ڴ�ռ��Ԫ�ص�ַ
	//int arr[2][3] =
	//{
	//	{1, 2, 3},
	//	{4, 5, 6}
	//};
	//cout << "��ά����ռ�ÿռ�Ϊ��" << sizeof(arr) << endl;
	//cout << "��ά�����һ��ռ�ÿռ�Ϊ��" << sizeof(arr[0]) << endl;
	//cout << "��ά�����һ��Ԫ��ռ�ÿռ�Ϊ��" << sizeof(arr[0][2]) << endl;
	//cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
	//cout << "��ά�����һ���׵�ַΪ��" << (int) arr[0] << endl;
	//cout << "��ά����ڶ����׵�ַΪ��" << (int) arr[1] << endl;
	//cout << "��άԪ�ص�һ��Ԫ�ص�ַΪ��" << (int)&arr[0][0] << endl;

	//ͳ�Ƴɼ�
	//int arr[3][3] =
	//{
	//	{100, 100, 100},
	//	{90, 50, 100},
	//	{60, 70, 80}
	//};
	// total[3] = {};
	//for (int i = 0; i <= 2; i++)
	//{
	//	for (int j = 0; j <= 2; j++)
	//	{
	//		total[i] = arr[i][j]+ total[i];
	//	}
	//}
	//cout << "��������������ܳɼ��ֱ�Ϊ" <<endl;
	//for (int h = 0; h <= 2; h++)
	//{
	//	cout << total[h] << endl;
	//}
	//string names[3] = { "����","����","����" };
	//for (int i = 0; i <= 2; i++)
	//{
	//	int sum = 0;
	//	for (int j = 0; j <= 2; j++)
	//	{
	//		sum += arr[i][j];
	//	}
	//	cout << names[i] << "���ܳɼ�Ϊ��" << sum << endl;
	//}


	//ָ��Ķ���
	//ָ�붨����﷨����������*ָ�������
	//��ָ���¼����a�ĵ�ַ


	//int a = 10;
	//int * p;
	//p = &a;
	//cout << "a�ĵ�ַΪ��" << (int) &a << endl;
	//cout << "a�ĵ�ַΪ��" << (int) p << endl;
	//
	////2��ʹ��ָ��
	////����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	////ָ��ǰ��*��ʾ�����ã��ҵ�ָ��ָ����ڴ�
	////ָ��ȿ��Դ����ַ��Ҳ�ܷ��ظı�ָ��ָ���ַ���ڴ�ͱ���
	//
	//*p = 1000;
	//cout << a << endl;
	//cout << *p << endl;


	//ͨ��ָ��������һ����ַ

	//ָ��Ҳ��һ���������ͣ���ô������������ռ�ö����ڴ�ռ�
	//��32λ����ϵͳ�£�ռ���ĸ��ֽڿռ䣻64Ϊ8���ֽ�

	//int a = 10;
	//int * p = &a;
	//cout << "sizeof (int *) = " << sizeof(int *) << endl;
	//cout << "sizeof (int *) = " << sizeof(float *) << endl;
	//cout << "sizeof (int *) = " << sizeof(double *) << endl;
	//cout << "sizeof (int *) = " << sizeof(char *) << endl;
	//cout << "sizeof (int *) = " << sizeof(p) << endl;

	//��ָ��

	////1����ָ�����ڸ�ָ��������г�ʼ��
	//int* p = NULL;

	////2����ָ���ǲ����Խ��з��ʵ�
	////0~255֮����ڴ�����ϵͳռ�õģ�����ǲ����Է��ʵ�
	//*p = 100;

	//Ұָ��

	////�ڳ����У���������ʹ��Ұָ��
	//int * p = (int *)0x1100;
	//cout << *p << endl;

	//const ����ָ�� -����ָ��
	//ָ��ָ������޸ģ�ָ��ָ��ĵ�ַ�����޸�
	//const ����˭��˭�Ͳ����޸�
	//const ���γ��� -ָ�볣��

	//int a = 10;
	//int b = 20;

	//const int * p = &a;//��ʱ��ַ���޸ģ���p���޸ģ���*p�����޸�
	//*p = 10;//����
	//p = &b;//��ȷ

	//int* const m = &a;//��ʱֵ���޸ģ���*p���޸ģ���p�����޸�
	//*m = 10;//��ȷ
	//m = &b;//����

	//const int* const n = &a;//��ʱ��ַ��ֵ�������޸ģ���*p��p�������޸�
	//*n = 10;//����
	//n = &b;//����

	//ָ�������
	//����ָ����������е�Ԫ��

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	//int* p = &arr[0];//�˴�Ҳ������arr��ʾ�����׵�ַ
	//cout << "��һ��Ԫ��Ϊ��" << *p << endl;
	//p++;//��ָ������ƶ�һ�������ֽڣ�Ҳ����4���ֽ�
	//cout << "�ڶ���Ԫ��Ϊ��" << *p << endl;

	//cout << "����ָ���������" << endl;
	//int* p2 = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "��" << i + 1 << "��Ԫ��Ϊ��" << *p2 << endl;
	//	p2++;
	//}

	//ָ��ͺ���

	////1��ֵ����

	//int a = 10;
	//int b = 20;
	//swap(a, b);


	////2����ַ����
	////�ı���ʵ��
	//swap02(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	









	system("pause");
	return 0;
}


//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
