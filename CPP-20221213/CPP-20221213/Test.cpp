#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}
////template<class T>
//
//template<typename T>
//void Swap(T& left, T& right)
//{
//		T tmp = left;
//		left = right;
//		right = tmp;
//}
//
//int main()
//{
//	int a, b;
//	a = 1;
//	b = 2;
//	Swap(a,b);
//
//	double c, d;
//	c = 1.1;
//	d = 2.2;
//	swap(c,d);
//
//
//	char e, f;
//	e = 'a';
//	f = 'b';
//
//	return 0;
//
//}
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//	//Add(a, (int)d);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//
//	// 显式实例化
//	Add<int>(a, b);
//	return 0;
//}

//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//// 通用加法函数
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 1, b = 2;
//	Add(a, b);//调用已经写好的
//
//	//实例化T是int的函数和本来就是int的函数可以同时存在
//	Add<int>(a, b);
//
//	return 0;
//}
//typedef int STDataType;
//typedef double STDataType;

template<typename T>
class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = )" <<capacity<<endl;

		_a = (T*)malloc(sizeof(T)*capacity);
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

	void Push(const T& x)
	{
		// ....
		// 扩容
		_a[_top++] = x;
	}

private:
	T* _a;
	int _top;
	int _capacity;
};


int main()
{
	// 类模板一般没有推演时机，函数模板实参传递形参，推演模板参数
	// 显示实例化
	// 他们是同一个类模板实例化出来的
	// 但是模板参数不同，他们就是不同类型
	Stack<double> st1; // double
	st1.Push(1.1);

	Stack<int> st2; // int
	st2.Push(1);

	return 0;
}