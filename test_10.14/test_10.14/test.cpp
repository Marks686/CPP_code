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
	// 1. ���ι��캯����û��ʹ��explicit���Σ���������ת������
 // explicit���ι��캯������ֹ����ת��---explicitȥ��֮�󣬴������ͨ������
	explicit Date(int year)
		:_year(year)
	{}
	/*
	// 2. ��Ȼ�ж�����������Ǵ�������ʱ�������������Բ����ݣ�û��ʹ��explicit���Σ���
   ������ת������
	// explicit���ι��캯������ֹ����ת��
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
	//��ʽ���͵�ת��
	Date d2 = 2022;
	//Date& d5 = d1;
	const Date& d5 = 2022;


	Date d3(d1);
	Date d3 = d1;

	return 0;
}