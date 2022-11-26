#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
//class Date
//{
//public:
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//class Date
//{
//public:
//	Date(int year, int month, int day)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj;  // 没有默认构造函数
//	int& _ref;  // 引用
//	const int _n; // const 
//};

//class A
//{
//public:
//    A(int a)
//        :_a1(a)
//        , _a2(_a1)
//    {}
//
//    void Print() {
//        cout << _a1 << " " << _a2 << endl;
//    }
//private:
//    int _a2;
//    int _a1;
//};
//int main() {
//    A aa(1);
//    aa.Print();
//}


//class Date
//{
//public:
//explicit Date(int year)
//	:_year(year)
//{}
//
////explicit Date(int year, int month = 1, int day = 1)
////	: _year(year)
////	, _month(month)
////	, _day(day)
////{}
//
//Date& operator=(const Date& d)
//{
//	if (this != &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	return *this;
//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//
//	int i = 0;
//	double d = i;
//	const double& rd = i;
//
//
//	Date d1(2022);
//	//隐式类型转化
//	Date d2 = 2022;
//	const Date& d5 = 2022;
//
//
//	//Date d3(d1);
//	//Date d3 = d1;
//
//	return 0;
//}


//string(const char* str)
//{
//
//};
//void push_back(const char* )

//class Date
//{
//public:
//	Date(int year, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1 = { 2022,10,12 };
//	return 0;
//}

//int N = 0;
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++N;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		++N;
//	}
//	static int GetN()
//	{
//		
//		return N;
//	}
//private:
//	int _a;
//
//	static int N;
//};
//int A::N = 0;
//
//void F1(A aa)
//{
//
//}
//A F2()
//{
//	A aa;
//	return aa;
//}
//int main()
//{
//	//A aa1(1);
//	//A aa2 = 2;
//
//	//A aa3 = aa1;
//
//	//cout << aa1.GetN() << endl;
//
//	//F1(aa1);
//	//cout << aa1.GetN() << endl;
//
//	F2();
//	//A aa4;
//
//	//cout << aa4.GetN() << endl;
//	cout << A::GetN() << endl;
//
//	return 0;
//}
class A
{
private:
	int _a;
public:
	class B
	{
		int _b;
	};
};

int main()
{
	cout << sizeof(A) << endl;

	A aa;
	A::B bb;
	return 0;
}