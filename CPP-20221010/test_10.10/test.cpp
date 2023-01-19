#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<assert.h>
using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
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


//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
// }
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year = 1970;
//	int _month = 1;
//	int _day = 1;
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
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		cout << "Date 拷贝构造" << endl;
//		_year = d._year;
//		_month = d._month;
//		_year = d._year;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Func1(Date d)
//{
//	cout << "Func1()" << endl;
//}
//void Func2(Date& d)
//{
//	cout << "Func2()" << endl;
//}
//int main()
//{
//	Date d1(2022,9,22);
//	Func1(d1);
//	Func2(d1);
//
//	return 0;
//}

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			return 29;
		}
		else
		{
			return monthDayArray[month];
		}
	}

	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
	bool operator>(const Date& d)
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year && _month > d._month)
		{

			return true;
		}
		else if (_year == d._year && _month == d._month && _day > d._day)
		{
			return true;
		}

		return false;
	}

	bool operator >= (const Date& d)
	{
		return *this > d || *this == d;
	}
	Date& operator +=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;

			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}

//private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2022, 9, 22);
	Date d2(2022, 9, 21);
	cout << (d1 > d2) << endl;
	cout << (d1 == d2) << endl;

	cout << d1.operator == (d2) << endl;

	d1 += 50;
	return 0;
}