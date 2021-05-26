#include<iostream>
#include<string>
#include<ctime>//时间的文件，与time的调用有关
#include<math.h>
using namespace std;
#define Day 7  //全局常量
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

	//if语句
	//int a;
	//cout << "输入您的高考成绩： " << endl;
	//cin >> a;
	//cout << "您的高考成绩为： " << a << endl;

	//if (a > 600)//if语句后面不能有分号
	//{
	//	if (a > 700)
	//	{
	//		cout << "您可以考入清华大学" << endl;
	//	}
	//	else if (a > 650)
	//	{
	//		cout << "您可以考入北京大学" << endl;
	//	}
	//	else
	//	{
	//		cout << "您可以考入人大" << endl;
	//	}

	//}
	//else if (a <= 600 && a >= 500)
	//{
	//	cout << "您可以考上二本" << endl;
	//}
	//else
	//{
	//	cout << "您不能考上二本" << endl;
	//}

	//小猪称重
	//int w_a, w_b, w_c;
	//cout << "请分别依次输入小猪A, B, C的重量：" << endl;
	//cin >> w_a >> w_b >> w_c;
	//cout << "A, B, C三只小猪的重量分别为：" << w_a << "\n" << w_b << "\n" << w_c << endl ;
	//if (w_a >= w_b && w_a >= w_c)
	//{
	//	cout << "A小猪最重，其质量为：" << w_a << endl;
	//}
	//else if (w_b >= w_a && w_b >= w_c)
	//{
	//	cout << "B小猪最重，其质量为：" << w_b << endl;
	//}
	//else
	//{
	//	cout << "C小猪最重，且其质量为：" << w_c << endl;
	//}


	////三目运算符
	//int a, b, c;
	//cout << "请输入a，b的值：" << endl;
	//cin >> a >> b;
	//c = (a > b ? a : b);//三目运算符，如果a > b，则输出第一个表达式；如果a <= b, 则输出第二个表达式
	////在c++中三目运算符返回的是变量可以赋值
	//(a > b ? a : b) = 100;
	//cout << "c 的值为：" << c <<"\na = "<< a <<"\nb = "<< b << endl;

	//switch语句 结构很清晰，执行效率高

	//int score;
	//cout << "请给电影打分：" << endl;
	//cin >> score;
	//cout << "您打的分为：" << score << endl;
	//switch (score) //依据score 的值进行跳转
	//{
	//case 10:
	//	cout << "您认为是经典电影" << endl; 
	//	break;
	//case 9:
	//	cout << "您认为是经典电影" << endl;
	//	break;
	//case 8:
	//	cout << "您认为是普通电影" << endl; 
	//case 7:
	//	cout << "您认为是普通电影" << endl;
	//	break;
	//default:
	//	cout << "您认为是烂片" << endl; 
	//	break;
	//}

	////循环语句while
	//int num = 0;
	//while (num <= 9)
	//{
	//	cout << num++ << endl;//前置递增，先进行加一在进行表达式运算；后置相反
	//}

	////案例 猜数字
	//srand((unsigned int)time(NULL));
	//int a = rand() % 100 + 1;
	//int val;
	//cout << "请猜测0到100间的一个数字：" << endl;
	//cin >> val;
	//cout << "您输入的数字为：" << val << endl;
	//while (val != a)
	//{
	//	if (val > a)
	//	{
	//		cout << "您输入的数字过大，请重新输入：" << endl;
	//	}
	//	else
	//	{
	//		cout << "您猜测的数字过小，请重新输入：" << endl;
	//	}
	//    cin >> val;
	//	cout << "您输入的数字为：" << val << endl;
	//	//break 可以直接跳出循环；
	//}
	//cout << "您猜中了这个数字，这个数字是:" << val << endl;

	////do while 循环语句 相比while语句，先进行一段循环在判断
	//int a = 0;
	//do
	//{
	//	cout << a++ << endl;
	//} 
	//while (a < 10);

	////do while 寻找出所有的水仙花数 
	//int num = 100, num_a, num_b, num_c, sum;
	//cout << "三位数中的水仙花数有：" << endl;
	//do
	//{
	//	num_a = num / 100; //求百位
	//	num_b = (num - num_a * 100) / 10; //求十位
	//	num_c = num % 10; //求个位
	//	sum = pow(num_a, 3) + pow(num_b, 3) + pow (num_c, 3); //求水仙花数
	//	if (num == sum)
	//	{
	//		cout << sum << endl;
	//	}
	//	num++;
	//} 
	//while (num < 1000);

	////for循环
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	////敲桌子 
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
	//	{
	//		cout << "敲桌子" << endl;
	//	}
	//	else
	//	{
	//		cout << i << endl;
	//	}
	//}

	////嵌套循环
	//for (int i = 1; i <= 10; i++)
	//{
	//	for (int j = 1; j <= 10; j++)
	//	{
	//		cout << "* " ;
	//	}
	//	cout << endl;
	//}

	////乘法口诀表
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "x" << i << "=" << i * j << '\t';
	//	}
	//	cout << endl;
	//}

	////break 三种使用时机 跳出最近的一个循环
	//cout << "请选择副本难度：" << endl;
	//cout << "1、普通\n2、中等\n3、困难" << endl;
	//int select = 0;
	//cin >> select;
	//switch(select)
	//{
	//case 1:
	//	cout << "您已进入普通难度" << endl;
	//	break;
	//case 2:
	//	cout << "您已进入中等难度" << endl;
	//	break;
	//case 3:
	//	cout << "您已进入困难难度" << endl;
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
	//			break;//退出内层循环
	//		}
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	////continue语句 执行到本行就跳过这一次循环进入下一次循环
	//for (int i = 0; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;//为偶数时跳过后续语句，即不输出，进入下一次循环；
	//	}
	//	cout << i << endl;
	//}

	////goto 语句能不用就不用
	//
	//goto FLAG;
	//cout << "1、 " << endl;
	//FLAG://这里是分号
	//cout << "2、 " << endl;


	////数组
	//int arr[5];
	//int arr2[5] = { 1,2,3 };//未写的元素用0填充
	//int arr3[] = { 1,2,5,6,8,9 };//维数由数据的数量决定
	//for (int i = 0; i <= 4; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int j = 0; j <= 4; j++)
	//{
	//	cout << arr3[j] << endl;
	//}

	////通过数组名统计整个数组占用的内存大小
	////通过数组名查看数组的首地址
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
	//cout << "每个元素占用的内存空间为：" << sizeof(arr[0]) << endl;
	//cout << "数组中的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "数组的首地址为：" << (int)arr << endl;
	//cout << "数组的第一个元素地址为：" << (int)&arr[0] << endl;
	//cout << "数组的第二个元素地址为：" << (int)&arr[1] << endl;

	////五只小猪称体重并依次排序
	//int arr[5];
	//int max = 0;
	//cout << "请输入五只小猪的体重分别为：" << endl;
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
	//cout << "体重依次为" << endl;
	//for (int k = 0; k <= 4; k++)
	//{
	//	cout << arr[k] << endl;
	//}

	////数组元素逆置
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
	
	////冒泡排序
	//int arr[5];
	//int max = 0;
	//int temp;
	//cout << "请输入五只小猪的体重分别为：" << endl;
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
	//cout << "小猪的质量依次为：" << endl;
	//for (int i = 0; i <= 4; i++)
	//{
	//	cout << arr[i] << '\t';
	//}




	system("pause");
	return 0;
}