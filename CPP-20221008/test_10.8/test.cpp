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
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//Date()
	//{
	//	_year = 1;
	//	_month = 1;
	//	_day = 1;
	//}
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2022, 9, 21);
	Date d2(2022, 9, 21);
	Date d3;
	d1.print();
	d2.print();
	d3.print();

	return 0;
}