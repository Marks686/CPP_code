//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//���캯������ʼ��
//	Date(int year = 2022, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//	//�ж�ƽ����
//	bool IsLeapYear(int year)//�ж��Ƿ�Ϊ����
//	{
//		return ((year % 4 == 0 && year % 100 != 0) || year % 100 == 0);
//	}
//	//ȷ��ÿ���µ�����
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
//	Date& operator+=(int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day = _day - GetMonthDay(_year, _month);
//			_month += 1;
//			if (_month > 12)
//			{
//				++_year;
//				_month = 1;
//			}
//		}
//		return *this;
//	}
//	Date operator+(int day)//����ı�ԭ�������ڣ����ڼ�������
//	{
//		Date ret = *this;//����thisָ��
//		return ret += day;
//	}
//	Date& operator-=(int day)
//	{
//		if (day < 0)
//		{
//			return *this += (-day);
//		}
//		_day = _day - day;
//		while (_day < 1)
//		{
//			_month -= 1;
//			if (_month == 0)
//			{
//				_month = 12;
//				--_year;
//			}
//			_day += GetMonthDay(_year, _month);
//		}
//		return *this;
//	}
//
//	Date operator-(int day)
//	{
//		Date ret = *this;
//		return ret -= day;
//	}
//
//	void PrintDate1()
//	{
//		cout << "ԭ��������" << _year << "-" << _month << "-" << _day << endl;
//	}
//	void PrintDate4()
//	{
//		cout << "�������ں������" << _year << "-" << _month << "-" << _day << endl;
//	}
//	void PrintDate5()
//	{
//		cout << "�������ں������" << _year << "-" << _month << "-" << _day << endl;
//	}
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main1()
//{
//	Date d1(2022, 10, 18);
//	d1.PrintDate1();
//
//	Date d4;
//	d4 = d1 - 18;
//	d4.PrintDate4();
//
//	/*Date d5;
//	d5 -= d1;
//	d5.PrintDate5();*/
//
//	system("pause");
//	return 0;
//}