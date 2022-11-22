#pragma once
#include<iostream>
using namespace std;
/*class Date
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
		//检查日期是否合法
		if (!(year >= 1 
			&& (month >= 1 && month <= 12)
			&&(day >= 1 && day <= GetMonthDay(year,month))))
		{
			cout << "非法日期" << endl;
		}
	}
	//~Date()
	//{

	//}

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

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	//Date AddDay(int day)
	//{}
	//Date operator+(int day)//运算符重载是针对于自定义类型的
	//{}

	bool operator == (const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	//operator=()

private:
	int _year;
	int _month;
	int _day;
};
/// /////////////////////////////////////////////////////////////////////////
class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" <<capacity<< endl;

		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}

		_top = 0;
		_capacity = capacity;
	}

	Stack& operator=(const Stack& st)
	{
		cout << "Stack& operator=(const Stack& st)" << endl;
		if (this != &st)
		{
			free(_a);
			_a = (int*)malloc(sizeof(int) * st._capacity);
			if (_a == nullptr)
			{
				perror("malloc fail");
				exit(-1);
			}
			memcpy(_a, st._a, sizeof(int) * st._top);
			_top = 0;
			_capacity = st._capacity;
		}
		
		return *this;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	Stack(const Stack& st)
	{
		_a = (int*)malloc(sizeof(int)*st._capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memcpy(_a, st._a, sizeof(int)*st._top);
		_top = st._top;
		_capacity = st._capacity;

	}

	void Push(int x)
	{
		// ....
		// 扩容
		_a[_top++] = x;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

class MyQueue
{
public:
	void push(int x)
	{
		_pushST.Push(x);
	}
private:
	Stack _pushST;
	Stack _popST;
	size_t _size = 0;
}; */



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
		//检查日期是否合法
		if (!(year >= 1
			&& (month >= 1 && month <= 12)
			&&(day >= 1 && day <= GetMonthDay(year,month))))
		{
			cout << "非法日期" << endl;
		}
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

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	bool operator==(const Date& d);

	bool operator>(const Date& d);

	bool operator>=(const Date& d);

	bool operator<=(const Date& d);

	bool operator<(const Date& d);

	bool operator!=(const Date& d);

	//d1 += 100
	Date& operator+=(int day);

	//d1 + 100
	Date operator+(int day);

	//d1 -= 100
	Date& operator-=(int day);

	//d1 - 100
	Date operator-(int day);

	//前置
	Date& operator++();

	//后置
	Date operator++(int);



private:
	int _year;
	int _month;
	int _day;
};