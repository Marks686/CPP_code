#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<assert.h>
using namespace std;


//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
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
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//
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
//
//
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue {
//public:
//	void push(int x)
//	{
//		//_pushST.Push(x);
//	}
//
//private:
//	Stack _pushST;
//	Stack _popST;
//
//	//size_t _size;
//};
//
//
//int main()
//{
//	Date d1;
//	MyQueue q;
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year , int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//Date()
//	//{
//	//	_year = 0;
//	//	_year = 0;
//	//	_year = 0;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//
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
//
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue {
//public:
//	//初始化列表：
//	//MyQueue(size_t capacity = 8)
//	//	:_popST(8)
//	//	,_pushST(8)
//	//	,_size(0)
//	//{
//	//	//_size = 0;
//	//}
//	void push(int x)
//	{
//		//_pushST.Push(x);
//	}
//
//private:
//	Stack _pushST;
//	Stack _popST;
//
//	size_t _size = 0;//这里不是初始话，这里给的是缺省值
//};
////void func()
////{
////}
//
//int main()
//{
//	//func();
//	Date d1;
//	MyQueue q;
//
//	return 0;
//}
////////////////////////////////////////////////////

//class Stack
//{
//public:
//	//Stack(int capacity = 4)
//	//{
//	//	cout << "Stack(int capacity = 4)" << endl;
//	//	_a = (int*)malloc(sizeof(int) * capacity);
//	//	if (_a == nullptr)
//	//	{
//	//		perror("malloc fail");
//	//		exit(-1);
//	//	}
//	//	_top = 0;
//	//	_capacity = capacity;
//	//}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a = nullptr;
//	int _top = 0;
//	int _capacity = 0;
//
//	//int* _a = (int*)malloc(sizeof(int)*4);
//	//int _top = 0;
//	//int _capacity = 4;
//};
//
//class MyQueue {
//public:
//	//初始化列表：
//	//MyQueue(size_t capacity = 8)
//	//	:_popST(8)
//	//	,_pushST(8)
//	//	,_size(0)
//	//{
//	//	//_size = 0;
//	//}
//	void push(int x)
//	{
//		//_pushST.Push(x);
//	}
//
//private:
//	Stack _pushST;
//	Stack _popST;
//
//	size_t _size = 0;//这里不是初始话，这里给的是缺省值
//};
//int main()
//{
//	
//	MyQueue q;
//
//	return 0;
//}
//////////////////////////////////////////////////////////
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
//		cout << "Date拷贝构造" << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//
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
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//	Stack(const Stack& st)
//	{
//		_a = (int*)malloc(sizeof(int) * st._capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//		memcpy(_a, st._a, sizeof(int) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//
//	void Push(int x)
//	{
//		// ....
//		// 扩容
//		_a[_top++] = x;
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
////void Func1(Date d1)
////{
////	cout << "Func1()" << endl;
////}
////void Func2(Date& d)
////{
////	cout << "Func2()" << endl;
////}
//
//class MyQueue {
//public:
//	void push(int x)
//	{
//		_pushST.Push(x);
//	}
//
//private:
//	Stack _pushST;
//	Stack _popST;
//	size_t _size = 0;//这里不是初始话，这里给的是缺省值
//};
//
//int main()
//{
//	Date d1(2022,9,22);//构造：完成初始化
//	/*Func1(d1);
//	Func2(d1);*/
//
//
//	//拷贝一份d1
//	//Date d2(d1);//拷贝构造：拷贝初始化
//
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//
//	Stack st2(st1);
//	st2.Push(10);
//	st1.Push(3);
//
//	MyQueue q1;
//	MyQueue q2(q1);
//
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
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//int main()
//{
//	Date d1(2022, 9, 22);
//	Date d2(2023, 1, 1);
//
//	//d1 > d2;
//	d1 == d2;
//	//d1 + 100;
//	//d1 - d2;
//	return 0;
//}


class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)))
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

	bool operator >=(const Date& d)
	{
		return *this > d || *this == d;//this是d1的地址，*this就是d1
	}

	Date& operator+=(int day)
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
	Date operator+(int day)
	{
		Date ret(*this);
		ret += day;
		return ret;
	}
	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};



int main()
{
	Date d1(2022, 9, 22);
	d1.Print();

	//Date d2(2023, 1, 1);
	//cout << (d1 > d2) << endl;
	//cout << (d1 == d2) << endl;
	//cout << (d1 >= d2) << endl;

	//d1 == d2;
	//cout << d1.operator==(d2)<< endl;

	d1 += 50;
	//d1 += 100;
	d1.Print();

	d1 += 100;
	d1.Print();

	
	return 0;
}