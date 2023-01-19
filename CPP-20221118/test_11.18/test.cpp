#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class A
{
public:
	A()
	{
		_a = 0;
		cout << "A()构造函数" << endl;
	}
private:
	int _a;
};
class Date
{
public:
	//Date(int year = 1, int month = 1, int day = 1)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	/*Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}*/ 
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;

	//自定义类型
	A _aa;
};


class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
	void Push(int x)
	{
		//...
		//扩容
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

	Stack _pushST;
	Stack _popST;
};
int main()
{
	Date d1;
	//Date d2(2022, 9, 21);
	//Date d3;

	d1.Print();
	//d2.Print();
	//d3.Print();

	//Stack st;
	//st.Push(1);
	//st.Push(2);
	//st.Push(3);
	MyQueue mq;
	mq.push(1);
	mq.push(2);

	return 0;
}