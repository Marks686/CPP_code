#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//struct A {
//
//	long a1;
//
//	short a2;
//
//	int a3;
//
//	int* a4;
//
//};
//int main()
//{
//	int a = sizeof(struct A);
//	cout << a << endl;
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//	Stack(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//
//		_top = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//int main()
//{
//	Date d1(2022, 9, 21);
//	Date d2(2022, 9, 21);
//	Date d3;
//	d1.print();
//	d2.print();
//	d3.print();
//
//	return 0;
//}



//lass Time
//{
//public:
// Time()
// {
// cout << "Time()" << endl;
// _hour = 0;
// _minute = 0;
// _second = 0;
// }
//private:
// int _hour;
// int _minute;
// int _second;
//};
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}

//class Date
//{
//public:
//	//Date(int year = 1, int month = 1, int day = 1)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//
//	d1.print();
//
//	return 0;
//}

//class Date
//{
//public:
//    
//    // 如果用户显式定义了构造函数，编译器将不再生成
//    Date(int year, int month, int day)
//    {
//    _year = year;
//    _month = month;
//    _day = day;
//    }
//    
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    // 将Date类中构造函数屏蔽后，代码可以通过编译，因为编译器生成了一个无参的默认构造函
//    //数
//        // 将Date类中构造函数放开，代码编译失败，因为一旦显式定义任何构造函数，编译器将不再
//        //生成
//        // 无参构造函数，放开后报错：error C2512: “Date”: 没有合适的默认构造函数可用
//        Date d1;
//    return 0;
//}

class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// 基本类型(内置类型)
	int _year;
	int _month;
	int _day;
	// 自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;
}
