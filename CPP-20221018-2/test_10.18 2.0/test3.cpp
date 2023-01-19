//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		,_day(day)
//	{
//
//	}
//	bool IsLeapYear(int year)
//	{
//		return((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//	}
//	int GetMonthDay(int year, int month)
//	{
//		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (IsLeapYear(year) && month == 2)
//		{
//			return 29;
//		}
//		else
//		{
//			return monthday[month];
//		}
//	}
//
//	Date& operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day = _day - GetMonthDay(_year, _month);
//			_month += 1;
//			if (_month > 12)
//			{
//				_month = 1;
//				_year += 1;
//			}
//		}
//		return *this;
//	}
//	Date operator+(int day)
//	{
//		Date ret = *this;
//		return ret += day;
//	}
//	void PrintDate1()
//	{
//		cout << "今日日期:" << _year << "-" << _month << "-" << _day << endl;
//	}
//	void PrintDate2()
//	{
//		cout << "加后的日期:" << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2022, 10, 19);
//	d1.PrintDate1();
//
//	Date d2;
//	d2 = d1 + 5;
//	d2.PrintDate2();
//
//	return 0;
//}