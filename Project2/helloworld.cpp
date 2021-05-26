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

	



	system("pause");
	return 0;
}