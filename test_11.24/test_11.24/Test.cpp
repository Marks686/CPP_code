#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Stack
{
public:
	/*Stack(int capacity = 4)
		:_a((int*)malloc(sizeof(int)*capacity))
		, _top(0)
		, _capacity(capacity)
	{
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
	}*/

	// 初始化列表和函数体内初始化可以混着来
	Stack(int capacity = 4)
		: _top(0)
		, _capacity(capacity)
	{
		cout << "Stack(int capacity = 4)" << endl;

		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memset(_a, 0, sizeof(int) * capacity);
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
		// ....
		// 扩容
		_a[_top++] = x;
	}

private:
	int* _a;  // 声明
	int _top;
	int _capacity;
};

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	// 对象每个成员什么时候定义初始化呢？-- 初始化列表
//	// 每个成员都要走初始化列表，就算不显示在初始化列表写，也会走
//	// 如果在初始化列表显示写了就用显示写的初始化
//	// 如果没有在初始化列表显示初始化
//	// 1、内置类型，有缺省值用缺省值，没有就用随机值
//	// 2、自定义类型，调用默认它的默认构造函数，如果没有默认构造就报错
//	B()
//		:_n(10)
//		, _m(2)
//		, _aa(11)
//	{
//		// _n = 10;
//	}
//
//private:
//	// const成员
//	const int _n;  // 声明
//	int _m = 1;    // 缺省值
//
//	A _aa;
//};
//
//
//class MyQueue {
//public:
//	MyQueue(int capacity)
//		:_popST(capacity)
//		, _pushST(capacity)
//	{}
//
//	void push(int x)
//	{
//		_pushST.Push(x);
//	}
//private:
//	Stack _pushST;
//	Stack _popST;
//	size_t _size = 0;
//};
//
//int main()
//{
//	B b;
//
//	// 定义的时候必须初始化
//	// const int N;
//	//N = 20;
//
//	// 对象实例化是整体定义 
//	// 对象每个成员什么时候定义呢？-- 初始化列表
//	Stack st1;
//	Stack st2;
//	Stack st3;
//
//	MyQueue q(10);
//
//	return 0;
//}

class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{}

	void Print()
	{
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
};

int main() {
	A aa(1);
	aa.Print();
}