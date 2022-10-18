#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Date
{
public:

	Date(int year = 1, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{

	}
	~Date()
	{

	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
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
	bool IsLeapYear(int year)
	{
		return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	}
	int GetMonthDay(int year, int month)
	{
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (IsLeapYear(year) && month == 2)
		{
			return 29;
		}
		else
		{
			return monthday[month];
		}
	}
	
	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month += 1;
			if (_month > 12)
			{
				_month = 1;
				_year += 1;
			}
		}
		return *this;
	}
	Date operator+(int day)
	{
		Date ret = *this;
		return ret += day;
	}
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += (-day);
		}
		_day = _day - day;
		while (_day < 1)
		{
			_month -= 1;
			if (_month == 0)
			{
				_year -= 1;
				_month = 12;
			}
			_day = _day + GetMonthDay(_year, _month);
		}
		return *this;
	}
	Date operator-(int day)
	{
		Date ret = *this;
		return ret -= day;
	}
	//前置++
	Date& operator++() 
	{
		return *this += 1;
	}
	//后置++:返回++之前的值
	Date operator++(int) 
	{
		//将之前的值进行保存
		Date ret = *this;
		*this += 1;
		return ret;
	}
	//前置--
	Date& operator--() {
		return *this -= 1;
	}
	//后置--
	Date operator--(int) {
		Date ret = *this; //执行拷贝构造
		*this -= 1;
		return ret;
	}
	bool operator>(const Date& d)
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year)
		{
			if (_month > d._month)
			{
				return true;
			}
			else if (_month == d._month)
			{
				if (_day > d._day)
				{
					return true;
				}
			}
		}
		return false;
	}

	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
	// >=运算符重载
	bool operator >= (const Date& d)
	{
		return *this > d || *this == d;
	}
	// <运算符重载
	bool operator < (const Date& d)
	{
		return !(*this >= d);
	}
	bool operator <= (const Date& d)
	{
		return !(*this > d);
	}
	// !=运算符重载

	bool operator != (const Date& d)
	{
		return !(*this == d);
	}
	void PrintDate1()
	{
		cout << "日期：" << _year <<" " << _month <<" " << _day << endl;
	}
	void PrintDate2()
	{
		cout << "减后日期：" << _year <<" " << _month <<" " << _day << endl;
	}
	void PrintDate3()
	{
		cout << "加后日期：" << _year << " " << _month << " " << _day << endl;
	}
	// d1 - d2
  // 日期-日期 返回天数
	int operator-(const Date& d)
	{
		int flag = 1;
		Date max = *this;
		Date min = d;
		if (*this < d)
		{
			max = d;
			min = *this;
			flag = -1;
		}
		int day = 0;
		while (min < max)
		{
			++(min);
			++day;
		}
		return day * flag;
	}

private:
	int _year;
	int _month;
	int _day;
};
//int main()
//{
//	Date d1(2022, 10, 18);
//	d1.PrintDate1();
//
//	//Date d2;
//	//d2 = d1;
//	//d2 -= 19;
//	//d2.PrintDate2();
//
//	//Date d3;
//	//d3 = d1 + 365;
//	//d3.PrintDate3();
//	++d1;
//	d1.PrintDate1();
//	d1++;
//	d1.PrintDate1();
//	
//
//
//	return 0;
//}