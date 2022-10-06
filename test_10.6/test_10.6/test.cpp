#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//class Date
//{
//public:
//	//void Init(int year, int month, int day)
//	//{
//	//	Date::year = year;
//	//	Date::month = month;
//	//	Date::day = day;
//	//}
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
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
//	d1.Init(2022, 9, 19);
//	return 0;
//}

//class Date
//{
//public:
//	//void Init(int year, int month, int day)
//	//{
//	//	Date::year = year;
//	//	Date::month = month;
//	//	Date::day = day;
//	//}
//	void Init(int year, int month, int day)
//	{
//		year = year;
//		month = month;
//		day = day;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2022, 9, 19);
//	return 0;
//}

//class Person
//{
//	void PrintPersonInfo()
//	{
//
//	}
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//int main()
//{
//	Person p1;
//	//p1._age = 1;
//
//	Person p2;
//	Person* ptr = &p2;
//	ptr->_age = 2;
//}


//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};

// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};
//
//int main()
//{
//	//A aa;
//	//cout << sizeof(A) << endl;
//	//cout << sizeof(aa) << endl;
//	//A aa2;
//	//A aa3;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	return 0;
//}

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;     // 年
	int _month;    // 月
	int _day;      // 日
};
int main()
{
	Date d1, d2;
	d1.Init(2022, 1, 11);
	d2.Init(2022, 1, 12);
	d1.Print();
	d2.Print();
	return 0;
}
