#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//class Date
//{
//public:
//	Date(int day)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//	return 0;
//}

class Date
{
public:
	// 1. 单参构造函数，没有使用explicit修饰，具有类型转换作用
 // explicit修饰构造函数，禁止类型转换---explicit去掉之后，代码可以通过编译
	explicit Date(int year)
		:_year(year)
	{}
	/*
	// 2. 虽然有多个参数，但是创建对象时后两个参数可以不传递，没有使用explicit修饰，具
   有类型转换作用
	// explicit修饰构造函数，禁止类型转换
	explicit Date(int year, int month = 1, int day = 1)
	: _year(year)
	, _month(month)
	, _day(day)
	{}
	*/
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2022);
	//隐式类型的转换
	Date d2 = 2022;
	//Date& d5 = d1;
	const Date& d5 = 2022;


	Date d3(d1);
	Date d3 = d1;

	return 0;
}