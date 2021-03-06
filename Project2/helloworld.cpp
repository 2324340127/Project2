#include<iostream>
#include<string>
#include<ctime>//时间的文件，与time的调用有关
#include<math.h>
#include"swap.h"//主函数包含这个自己编写的头文件
using namespace std;
#define Day 7  //全局常量

//函数的定义
//语法
//返回值类型
//函数定义的时候， num1 和 num2 并非真实数据，只是形参
//当调用函数时，实参的值会传递给形参

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}

//定义函数，实现两个数字进行交换
//void swap(int num1, int num2)
//{
//	cout << "交换前：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;//交换前
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "交换前：" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;//交换后
//	//不需要return
//
//}



////常见函数样式：
////1、无参无返
//void test01()
//{
//	cout << "this is test01" << endl;
//}
////2、有参无返
//void test02(int a)
//{
//	cout << "this is test02 a = " << a << endl;
//}
////3、无参有返
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 1000;
//}
////4、有参有返
//int test04(int a)
//{
//	cout << "this is test04 a = " << a << endl;
//	return a;
//}

//函数的声明
////比较函数，实现两个整型数字进行比较，返回较大的值
////提前告诉编译器函数的存在，可以利用函数的声明,
////适用于将函数放在主函数后面的函数
////且形参不一定要相等
////声明可以写多次，定义只能写一次；
//
//int max(int c, int b);//此时形参是c;后面形参是a;

//函数的分文件编写
//实现两个数字交换的函数

//函数的声明

//void swap(int a, int b);

//函数的定义

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1、创建.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

	//结构体用于用户自定义的数据类型
	//1、创建一个学生数据类型：学生包括（姓名，年龄，分数）


	//结构体嵌套结构体
//
//struct Student
//{
//	//成员列表
//
//	//姓名
//	string name;
//
//	//年龄
//	int age;
//
//	//分数
//	int score;
//
//}s3;//在结构体后加上创建变量
//
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	Student stu;
//};
//
//
//
//
////值传递
//void printfStudent(Student s)
//{
//	cout << "子函数中 姓名：" << s.name << "年龄：" << s.age << "成绩：" << s.score << endl;
//}
//
////地址传递
////将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
////加入const 之后 一旦有修改会报误操作
//
//
//void printfStudent2(const struct Student* p)
//{
//	cout << "子函数2中 姓名：" << p->name << "年龄：" << p->age << "成绩：" << p->score << endl;
//}
//
////const 的使用场景



//结构体案例1
//学校正在做毕业设计，每个老师带领五个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5个学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所需的学生赋值
//最终打印出老师数据和老师所需的学生数据

////学生结构体
//struct student
//{
//	string name;
//	int age;
//};
//
////老师结构体
//struct teacher
//{
//	string name;
//	student s[5];
//};
//
//void t_inf(struct teacher *t)
//{
//	cout << "输入老师姓名" << endl;
//	cin >> (*t).name;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "请输入第" << i + 1 << "个学生姓名和成绩" << endl;
//		cin >> (*t).s[i].name;
//		cin >> (*t).s[i].age;
//	}
//}
//void print_inf(struct teacher* t)
//{
//	cout << "老师姓名为：" << (*t).name << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "第" << i + 1 << "个学生姓名和成绩依次为：" << endl;
//		cout << (*t).s[i].name << "\t" << (*t).s[i].age << endl;
//	}
//}

////结构体案例2
////设计一个英雄的结构体，包括成员姓名，年龄，性别
////创建结构体数组，数组中存放5名英雄
////通过冒泡排序的算法，将数组中的英雄按年龄进行升序排序
////最终打印排序后的结果
//
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//void bubblesort_hero(struct hero* p, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (p[j].age > p[j + 1].age)
//			{
//				struct hero temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printf_hero_info(struct hero* p, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << p[i].name << "\t" << p[i].age << "\t" << p[i].sex << endl;
//	}
//}

//通讯录管理系统
//添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）
//最多记录1000人；
//显示联系人：显示通讯录中所有联系人信息
//删除联系人：按照姓名删除指定联系人
//查找联系人：按照姓名查看指定联系人信息
//修改联系人：按照姓名重新修改指定联系人信息
//清空联系人：清空通讯录中所有信息
//退出通讯录：退出当前通讯录

int main()
{
	//int a = 10;
	//int b = 20;
	//swap(a, b);
	////当我们做值得传递时候，函数的形参发生改变，并不会影响实参
	////函数外的参数并不会发生变化，也就是a和b不会变
	//cout << a << "\n" << b << endl;
	//cout << add(1, 2) << endl;

	////无参无返调用
	//test01();
	////有参无返调用
	//test02(1);
	////无参有返调用
	//int a = test03();
	//cout << "num1 = " << a << endl;
	////有参有返调用
	//int b = test04(5);
	//cout << "num2 =" << b << endl;

	//int a = 10;
	//int b = 20;
	//cout << max(a, b) << endl;

	//int a = 10;
	//int b = 20;
	//swap(a, b);

	//struct Student s1;//结构体应用时结构体struct可以省略，声明时不能省略
	//s1.name = "张三";
	//s1.age = 18;
	//s1.score = 100;
	//cout << "姓名：" << s1.name <<"\n"<< "年龄：" << s1.age <<"\n"<< "成绩：" << s1.score << endl;
	//struct Student s2 = { "李四",19,90 };
	//cout << "姓名：" << s2.name << "\n" << "年龄：" << s2.age << "\n" << "成绩：" << s2.score << endl;

	//创建结构体数组
	//Student arr[3] = {
	//	{"张三",18,100},
	//	{"李四",16,80},
	//	{"王五",17,98}
	//};
	//for(int i = 0; i < 3; i++)
	//{
	//	cout << arr[i].name << "的年龄为：" << arr[i].age << "\t" << "成绩为：" << arr[i].score << endl;
	//}

	////1、创建学生结构体变量
	//Student s = { "张三",18,100 };

	////2、通过指针指向结构体指针
	//Student* p = &s;

	////3、通过指针访问结构体变量中的数据

	//cout << "姓名：" << p->name << "年龄为：" << p->age << "分数为：" << (*p).score << endl;

	//创建老师；

	//teacher t;
	//t.id = 100;
	//t.name = "老王";
	//t.age = 56;
	//t.stu.name = "小王";
	//t.stu.age = 18;
	//t.stu.score = 100;

	//cout << "老师姓名为：" << t.name << "老师编号为：" << t.id << "老师年龄为：" << t.age
	//	<< "老师辅导的学生为：" << t.stu.name << "学生成绩为："
	//	<< t.stu.age << "学生年龄为：" << t.stu.age << endl;


	//将结构体作为函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息


	//创建结构体变量

	//struct Student s;
	//s.name = "张三";
	//s.age = 20;
	//s.score = 85;
	////cout << "main函数中打印 姓名;" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
	//printfStudent(s);
	//printfStudent2(&s);

	////创建结构体变量
	//Student s = { "张三",15, 70 };

	////通过函数打印结构体变量

	//printfStudent(s);

	//创建老师信息
	//teacher t[3];
	//for (int i = 0; i < 3; i++)
	//{
	//	t_inf(&t[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	print_inf(&t[i]);

	//}


	////创建英雄信息
	//struct hero h[5] =
	//{
	//	{"刘备",23,"男"},
	//	{"张飞",22,"男"},
	//	{"关羽",20,"男"},
	//	{"赵云",21,"男"},
	//	{"貂蝉",19,"女"}
	//};
	//int len = sizeof(h) / sizeof(h[0]);
	//bubblesort_hero(h,len);
	//printf_hero_info(h,len);






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

	///for循环
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
	
	//二维数组的定义方式
	//int arr[2][3];
	//arr[0][0] = 10;
	//arr[0][1] = 10;
	//arr[0][2] = 20;
	//arr[1][0] = 50;
	//arr[1][1] = 40;
	//arr[1][2] = 60;

	//二维数组名称用途
	//查看内存空间和元素地址
	//int arr[2][3] =
	//{
	//	{1, 2, 3},
	//	{4, 5, 6}
	//};
	//cout << "二维数组占用空间为：" << sizeof(arr) << endl;
	//cout << "二维数组第一行占用空间为：" << sizeof(arr[0]) << endl;
	//cout << "二维数组第一个元素占用空间为：" << sizeof(arr[0][2]) << endl;
	//cout << "二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//cout << "二维数组首地址为：" << (int)arr << endl;
	//cout << "二维数组第一行首地址为：" << (int) arr[0] << endl;
	//cout << "二维数组第二行首地址为：" << (int) arr[1] << endl;
	//cout << "二维元素第一个元素地址为：" << (int)&arr[0][0] << endl;

	//统计成绩
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
	//cout << "张三李四王五的总成绩分别为" <<endl;
	//for (int h = 0; h <= 2; h++)
	//{
	//	cout << total[h] << endl;
	//}
	//string names[3] = { "张三","李四","王五" };
	//for (int i = 0; i <= 2; i++)
	//{
	//	int sum = 0;
	//	for (int j = 0; j <= 2; j++)
	//	{
	//		sum += arr[i][j];
	//	}
	//	cout << names[i] << "的总成绩为：" << sum << endl;
	//}


	//指针的定义
	//指针定义的语法；数据类型*指针变量名
	//让指针记录变量a的地址


	//int a = 10;
	//int * p;
	//p = &a;
	//cout << "a的地址为：" << (int) &a << endl;
	//cout << "a的地址为：" << (int) p << endl;
	//
	////2、使用指针
	////可以通过解引用的方式来找到指针指向的内存
	////指针前加*表示解引用，找到指针指向的内存
	////指针既可以代表地址，也能返回改变指针指向地址的内存和变量
	//
	//*p = 1000;
	//cout << a << endl;
	//cout << *p << endl;


	//通过指针来保存一个地址

	//指针也是一种数据类型，那么这种数据类型占用多少内存空间
	//在32位操作系统下，占用四个字节空间；64为8个字节

	//int a = 10;
	//int * p = &a;
	//cout << "sizeof (int *) = " << sizeof(int *) << endl;
	//cout << "sizeof (int *) = " << sizeof(float *) << endl;
	//cout << "sizeof (int *) = " << sizeof(double *) << endl;
	//cout << "sizeof (int *) = " << sizeof(char *) << endl;
	//cout << "sizeof (int *) = " << sizeof(p) << endl;

	//空指针

	////1、空指针用于给指针变量进行初始化
	//int* p = NULL;

	////2、空指针是不可以进行访问的
	////0~255之间的内存编号是系统占用的，因此是不可以访问的
	//*p = 100;

	//野指针

	////在程序中，尽量避免使用野指针
	//int * p = (int *)0x1100;
	//cout << *p << endl;

	//const 修饰指针 -常量指针
	//指针指向可以修改，指针指向的地址不能修改
	//const 修饰谁，谁就不能修改
	//const 修饰常量 -指针常量

	//int a = 10;
	//int b = 20;

	//const int * p = &a;//此时地址能修改，即p能修改，但*p不能修改
	//*p = 10;//错误
	//p = &b;//正确

	//int* const m = &a;//此时值能修改，即*p能修改，但p不能修改
	//*m = 10;//正确
	//m = &b;//错误

	//const int* const n = &a;//此时地址和值均不能修改，即*p和p均不能修改
	//*n = 10;//错误
	//n = &b;//错误

	//指针和数组
	//利用指针访问数组中的元素

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << "第一个元素为：" << arr[0] << endl;

	//int* p = &arr[0];//此处也可以用arr表示数组首地址
	//cout << "第一个元素为：" << *p << endl;
	//p++;//让指针向后移动一个整形字节，也就是4个字节
	//cout << "第二个元素为：" << *p << endl;

	//cout << "利用指针遍历数组" << endl;
	//int* p2 = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "第" << i + 1 << "个元素为：" << *p2 << endl;
	//	p2++;
	//}

	//指针和函数

	////1、值传递

	//int a = 10;
	//int b = 20;
	//swap(a, b);


	////2、地址传递
	////改变了实参
	//swap02(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	
	//1、先创建数组
	//int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//bubblesort(&arr[0], len);
	//printfarray(arr, len);



	system("pause");
	return 0;
}


//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
